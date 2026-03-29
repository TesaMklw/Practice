#include <iostream>
using namespace std;

int main() {
    string word;
    cin >> word;
    if (word.find("COV") != string::npos) {
        cout << "Veikur!";
    } else {
        cout << "Ekki veikur!";
    }
}