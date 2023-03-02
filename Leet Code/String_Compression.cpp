class Solution {
public:
    int compress(vector<char>& chars) {
        // Initialize count variable and write position
        int count = 1;
        int write_pos = 0;
        
        // Iterate over input array
        for (int i = 1; i <= chars.size(); i++) {
            // If current character is same as previous, increment count
            if (i < chars.size() && chars[i] == chars[i-1]) {
                count++;
            } else {
                // Write compressed character at write position
                chars[write_pos] = chars[i-1];
                write_pos++;
                // If count is greater than 1, write count as well
                if (count > 1) {
                    string count_str = to_string(count);
                    for (char c : count_str) {
                        chars[write_pos] = c;
                        write_pos++;
                    }
                }
                // Reset count for next group of characters
                count = 1;
            }
        }
        // Return new length of input array (which is equal to write position)
        return write_pos;
    }
};
// int main() {
//     Solution s;
//     vector<char> chars1 {'a','a','b','b','c','c','c'};
//     assert(s.compress(chars1) == 6);
//     vector<char> chars2 {'a','b','c'};
//     assert(s.compress(chars2) == 3);
//     vector<char> chars3 {'a','a','a','a','a','b'};
//     assert(s.compress(chars3) == 3);
//     vector<char> chars4 {'a','a','a','b','b','a','a'};
//     assert(s.compress(chars4) == 6);
//     return 0;
// }

