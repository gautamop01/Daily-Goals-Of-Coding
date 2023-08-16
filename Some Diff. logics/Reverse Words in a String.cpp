class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string ans = s;
        reverse(ans.begin(), ans.end());

        stringstream ss(ans);  // Create a stringstream to tokenize the reversed string
        string word, reversed;

        while (ss >> word) {
            reverse(word.begin(), word.end());  // Reverse each word
            if (!reversed.empty()) {
                reversed += " ";  // Add a space if this is not the first word
            }
            reversed += word;  // Append the reversed word to the result
        }

        return reversed;
    }
};
// >> Used in Stringstream
