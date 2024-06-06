#include <iostream>
#include <climits>  // For INT_MAX and INT_MIN
using namespace std;


#include <bitset>

int main() {
    int positive = INT_MAX;                       // Define an integer with value 5
    int negative = INT_MIN;               // Define another integer with value -5
    
    bitset<32> binaryPositive(positive);  // Create an 8-bit binary representation of the positive number
    bitset<32> binaryNegative(negative);  // Create an 8-bit binary representation of the negative number

    cout << "Binary of 5: " << binaryPositive << endl;   // Output the binary representation of 5
    cout << "Binary of -5: " << binaryNegative << endl;  // Output the binary representation of -5


    // unsigned long positiveInt = binaryPositive.to_ulong();  // Convert positive binary to unsigned long
    // unsigned long negativeInt = binaryNegative.to_ulong();  // Convert negative binary to unsigned long

    // // Print the converted integers
    // cout << "Integer of binary 5: " << positiveInt << endl;
    // cout << "Integer of binary -5 (as unsigned): " << negativeInt << endl;


    return 0;
}
