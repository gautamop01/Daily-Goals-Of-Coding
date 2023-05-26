class Solution {
public:
    int longestPalindrome(string s) {
        int ans = 0; // Initialize a variable to store the length of the longest palindrome
        int odd = 0; // Initialize a flag to track if there is an odd frequency character
        map<char, int> mp; // Create a map to count the frequencies of characters

        // Iterate through each character in the string and update the frequencies in the map
        for (auto c : s)
            mp[c]++;

        // Iterate through each character-frequency pair in the map
        for (auto x : mp) {
            if (x.second % 2 == 0)
                ans += x.second; // If the frequency is even, add it to the answer directly
            else {
                ans += x.second - 1; // If the frequency is odd, add (frequency - 1) to the answer
                odd = 1; // Set the odd flag to 1
            }
        }

        if (odd)
            ans++; // If there is at least one odd frequency character, increment the answer by 1

        return ans; // Return the length of the longest palindrome
    }
};
