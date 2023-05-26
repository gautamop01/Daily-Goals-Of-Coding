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
