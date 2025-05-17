require("dotenv").config();
const { ethers } = require("ethers");
const mongoose = require("mongoose");
const fs = require("fs");

// 🔗 Load contract ABI
const abi = JSON.parse(fs.readFileSync("./contract-abi.json", "utf8"));
const provider = new ethers.providers.JsonRpcProvider(process.env.RPC_URL);
const contract = new ethers.Contract(process.env.CONTRACT_ADDRESS, abi, provider);

// 🔗 MongoDB Schema
mongoose.connect(process.env.MONGODB_URI, {
  useNewUrlParser: true,
  useUnifiedTopology: true,
});

const agreementSchema = new mongoose.Schema({
  agreementId: Number,
  client: String,
  freelancer: String,
  amount: String,
  tokenType: String,
  txHash: String,
  status: { type: String, default: "created" },
  disputeReason: String,
}, { timestamps: true });

const Agreement = mongoose.model("Agreement", agreementSchema);

// 🧠 Event Handlers
const handleAgreementCreated = async (agreementId, client, freelancer, amount, tokenType, event) => {
  const id = Number(agreementId.toString());
  const exists = await Agreement.findOne({ agreementId: id });
  if (exists) {
    console.log(`⚠️ Agreement ${id} already exists`);
    return;
  }

  await Agreement.create({
    agreementId: id,
    client,
    freelancer,
    amount: amount.toString(),
    tokenType,
    txHash: event.transactionHash,
    status: "created"
  });

  console.log(`✅ AgreementCreated saved: ID ${id}`);
};

const handleWorkConfirmed = async (agreementId) => {
  const id = Number(agreementId.toString());
  await Agreement.findOneAndUpdate(
    { agreementId: id },
    { status: "work_confirmed" },
    { new: true }
  );
  console.log(`✅ WorkConfirmed updated: ID ${id}`);
};

const handleFundsReleased = async (agreementId) => {
  const id = Number(agreementId.toString());
  await Agreement.findOneAndUpdate(
    { agreementId: id },
    { status: "funds_released" },
    { new: true }
  );
  console.log(`✅ FundsReleased updated: ID ${id}`);
};

const handleDisputeRaised = async (agreementId, reason) => {
  const id = Number(agreementId.toString());
  await Agreement.findOneAndUpdate(
    { agreementId: id },
    { status: "disputed", disputeReason: reason },
    { new: true }
  );
  console.log(`⚠️ DisputeRaised updated: ID ${id}`);
};

// 🚀 Register All Event Listeners
const registerEventListeners = () => {
  console.log("🟢 Listening for multiple contract events...");

  contract.on("AgreementCreated", handleAgreementCreated);
  contract.on("WorkConfirmed", handleWorkConfirmed);
  contract.on("FundsReleased", handleFundsReleased);
  contract.on("DisputeRaised", handleDisputeRaised);
};

// 🔁 Init
registerEventListeners();
