#include <bits/stdc++.h>
using namespace std;

// Brute Force: Convert Binary (String) to Decimal
int binaryToDecimal_Brute(string binary) {
    int decimal = 0;
    int power = 1;  // 2^0

    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += power;
        }
        power *= 2;
    }
    return decimal;
}

// Optimal Approach: Convert Binary (Integer) to Decimal
int binaryToDecimal_Optimal(int binary) {
    int decimal = 0, power = 0;

    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * (1 << power);  // (1 << power) is 2^power
        binary /= 10;
        power++;
    }
    return decimal;
}

// Brute Force: Convert Decimal to Binary
string decimalToBinary_Brute(int decimal) {
    string binary = "";
    while (decimal > 0) {
        binary = to_string(decimal % 2) + binary; // Prepend remainder
        decimal /= 2;
    }
    return binary == "" ? "0" : binary; // Edge case: if decimal is 0
}

// Optimal Approach: Convert Decimal to Binary (Using Bitwise)
string decimalToBinary_Optimal(int decimal) {
    string binary = "";
    while (decimal > 0) {
        binary = ((decimal & 1) ? "1" : "0") + binary; // Check last bit
        decimal >>= 1; // Right shift by 1 (divide by 2)
    }
    return binary == "" ? "0" : binary;
}

// Main Function
int main() {
    string binaryStr = "1011";
    int binaryNum = 1011;
    int decimalNum = 13;

    cout << "Binary to Decimal (Brute Force): " << binaryToDecimal_Brute(binaryStr) << endl;
    cout << "Binary to Decimal (Optimal): " << binaryToDecimal_Optimal(binaryNum) << endl;
    cout << "Decimal to Binary (Brute Force): " << decimalToBinary_Brute(decimalNum) << endl;
    cout << "Decimal to Binary (Optimal): " << decimalToBinary_Optimal(decimalNum) << endl;

    return 0;
}
