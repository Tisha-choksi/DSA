// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     for (int i=0;i<n;i++){
//         for (int j =1; j<=i+1;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// 
//    1
//   1 2
//  1 2 3
// 1 2 3 4
// #include<iostream>
// using namespace std;
// int main(){
//     int n =5;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for (int j =1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//     1
//    1 1
//   1 2 1
//  1 3 3 1

// #include <iostream>
// using namespace std;        
// int main() {
//     int n = 5; // Number of rows
//     for (int i = 0; i < n; i++) {
//         for (int j=0;j<n-i;j++){
//             cout<<" ";
//         }
//         int num = 1;
//         for (int j = 0; j <= i; j++) {
//             cout << num << " ";
//             num = num * (i - j) / (j + 1);
//         }
//         cout << endl;
//     }
//     return 0;
// }
//    1
//   121
//  12321
// 1234321
//  12321
//   121
//    1
// #include <iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for (int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         for (int j=i-1;j>=1;j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     for (int i=n-1;i>=1;i--){
//         for (int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for (int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         for (int j=i-1;j>=1;j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// 1     2     3
//   4  5  6
//    7 8 9

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 3; 
//     int num = 1;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i; j++) {
//             cout << " ";
//         }
//         for (int j = 0; j < n; j++) {
//             cout << num++;
//             if (j != n - 1)
//                 cout << "   ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
    
//     for(int i=n;i>=1;i--){
//         char ch = 'A';
//         for (int j=1;j<=i;j++){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
    
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         char ch = 'A';
//         for (int j=1;j<=i;j++){
//             cout<<ch;
//             ch++;
//         }
//         for(int j =i-1;j>=1;j--){
//             cout<<ch;
//             ch--;
//         }
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main() {
//     int n = 5;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }
//         char ch = 'A';
//         for (int j = 1; j < i; j++) {
//             cout << ch;
//             ch++;
//         }
//         for (int j = i; j >= 1; j--) {
//             cout << ch;
//             ch--;
//         }
//         cout << endl;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;    
int main(){
    int n=5;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            if ((i+j)%2 ==0){
                cout<<1;
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
    }
    return 0;
}