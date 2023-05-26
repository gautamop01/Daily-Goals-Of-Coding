// #include <bits/stdc++.h>
// class Solution {
// public:
//     string addStrings(string num1, string num2) {
//         int ans;
//         int n1 = stoi(num1);
//         int n2 = stoi(num2);
//         ans = n1+n2;
//         string s = to_string(ans);
//         return s;
        
//     }
// };
#include <string>

class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;
        string result;
        int i = num1.length() - 1;
        int j = num2.length() - 1;

        while (i >= 0 || j >= 0 || carry > 0) {
            int digit1 = (i >= 0) ? (num1[i--] - '0') : 0;
            int digit2 = (j >= 0) ? (num2[j--] - '0') : 0;
            int sum = digit1 + digit2 + carry;
            carry = sum / 10;
            result = to_string(sum % 10) + result;
        }

        return result;
    }
};

/*
// With Explanation 
#include <string>

class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0; // Initialize a variable to hold the carry value
        string result; // Initialize an empty string to store the result
        int i = num1.length() - 1; // Initialize a pointer for the last digit of num1
        int j = num2.length() - 1; // Initialize a pointer for the last digit of num2

        // Iterate through the digits of both numbers and the carry value
        while (i >= 0 || j >= 0 || carry > 0) {
            // Get the current digits from num1 and num2 (or 0 if no more digits left)
            int digit1 = (i >= 0) ? (num1[i--] - '0') : 0;
            int digit2 = (j >= 0) ? (num2[j--] - '0') : 0;

            // Calculate the sum of the digits and the carry
            int sum = digit1 + digit2 + carry;
            carry = sum / 10; // Update the carry with the tens digit of the sum
            result = to_string(sum % 10) + result; // Append the units digit to the result

            // Move to the next digit in each number
        }

        return result; // Return the final result string
    }
};


*/
