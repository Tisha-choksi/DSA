#include <iostream>
using namespace std;

int main() {
    int n = 3; // Number of rows
    for (int i = 1; i <= n; i++) {
        char ch = 'A' + i - 1;
        for (int j = 1; j <= i; j++) {
            cout << ch;
            ch--;
        }
        cout << endl;
    }

    return 0;
}