// class Solution {
// public:
//     string multiply(string num1, string num2) {
//         int ans;
//         int n1 = stoi(num1);
//         int n2 = stoi(num2);
//         ans = n1*n2;
//         string s = to_string(ans);
//         return s;
//     }
// };


class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0"; // If any of the numbers is zero, return "0"
        
        int m = num1.size();
        int n = num2.size();
        vector<int> result(m + n, 0); // Initialize a vector to store the result
        
        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                int product = (num1[i] - '0') * (num2[j] - '0'); // Multiply the digits at position i and j
                
                int p1 = i + j; // Position of the first digit
                int p2 = i + j + 1; // Position of the second digit
                
                int sum = product + result[p2]; // Add the product to the current result digit
                
                result[p1] += sum / 10; // Carry over the value to the previous digit
                result[p2] = sum % 10; // Store the current digit
                
            }
        }
        
        string ans = "";
        for (int digit : result) {
            if (ans.empty() && digit == 0) continue; // Skip leading zeros
            ans += to_string(digit); // Convert digit to string and append it to the answer
        }
        
        return ans;
    }
};

