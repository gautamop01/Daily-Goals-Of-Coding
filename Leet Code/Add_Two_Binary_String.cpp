#include <bits/stdc++.h>   // includes all the standard C++ library headers
using namespace std;

string addBinary(string a, string b) {
    int i = a.size() - 1, j = b.size() - 1, carry = 0;
    // initialize variables i and j to the last index of strings a and b respectively,
    // and carry to 0 to keep track of any carry over during addition
    string result = "";
    // initialize an empty string to hold the binary sum of the input strings
    while (i >= 0 || j >= 0 || carry) {
        // loop through the strings from right to left until both have been fully processed
        // and there is no carry left to add
        int sum = carry;
        // initialize sum to the current carry value
        if (i >= 0) {
            sum += a[i--] - '0';
            // if there are still digits in string a, add the rightmost digit to sum
            // and decrement the index of a to move to the next digit
        }
        if (j >= 0) {
            sum += b[j--] - '0';
            // if there are still digits in string b, add the rightmost digit to sum
            // and decrement the index of b to move to the next digit
        }
        result = char(sum % 2 + '0') + result;
        // append the least significant bit of the sum to the result string
        carry = sum / 2;
        // update the carry by dividing the sum by 2 to get the carry bit
    }
    return result;
    // return the binary sum of the input strings
}

int main() {
    string a, b;
    cout << "Please enter two binary strings: ";
    cin >> a >> b;
    // prompt the user to enter two binary strings and read them from input
    string sum = addBinary(a, b);
    // compute the binary sum of the input strings using the addBinary function
    cout << "The sum of " << a << " and " << b << " is " << sum << endl;
    // print the input strings and their sum to the console
    return 0;
}
