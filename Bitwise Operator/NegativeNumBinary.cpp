#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int i = sizeof(int) * 8 - 1; // Number of bits in an int

    cout << "Binary representation: ";
    while (i >= 0) {
        int bit = (n >> i) & 1;// e.g : First iteration is for i =31 then it will right shift 31 bits so the bit left is 32th and taking and with it will produce its bit and we take output of it.
        cout << bit;
        i--;
    }

    cout << endl;

    return 0;
}
