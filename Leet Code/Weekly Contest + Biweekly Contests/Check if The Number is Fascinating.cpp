#include <iostream>
#include <string>
#include <unordered_set>

class Solution {
public:
    bool isFascinating(int n) {
        std::string concatenated = std::to_string(n) + std::to_string(2 * n) + std::to_string(3 * n);
        if (concatenated.length() != 9) {
            return false;
        }
        
        std::unordered_set<char> digits;
        for (char digit : concatenated) {
            if (digit == '0') {
                return false;
            }
            digits.insert(digit);
        }
        
        return digits.size() == 9;
    }
};
