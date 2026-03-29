#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int r = n - 1;
    int m[n];
    while (r >= 0) {
        cin >> m[r];
        r--;
    }

    int c = 0;
    while (c < n) {
        cout << m[c] << endl;
        c++;
    }
}