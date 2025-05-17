#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows
    char ch = 'A';

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i * 2 - 1; j++) {
            cout << ch;
        }
        cout << endl;
        ch++;
    }

    return 0;
}