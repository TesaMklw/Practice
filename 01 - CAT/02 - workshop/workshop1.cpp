//1. Input, output
//2. Variable, datatype
//3. Operator
//4. Kondisi
//5. Scoup
//6. Repetition
#include <iostream>
using namespace std;

int main() {
    int uang, harga;
    cin >> uang >> harga;
    if (uang >= harga) {
        cout << "barang terbeli" << endl;
        uang = uang - harga;
    } else {
        cout << "Uangnya gak cukup" << endl;
    }
    cout << uang << endl;
}