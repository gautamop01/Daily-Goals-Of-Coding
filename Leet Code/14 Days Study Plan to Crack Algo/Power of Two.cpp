class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;
        }
        while (n > 1) {
            if (n % 2 != 0) {
                return false;
            }
            n /= 2;
        }
        return true;
    }
};

// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         // If n is a power of 2, it will have only one bit set in its binary representation.
//         // For example, 2^3 = 8 = 0b1000, and 2^4 = 16 = 0b10000.
//         // We can use the bitwise AND operator to check if only one bit is set.
//         // For example, 8 & 7 = 0b1000 & 0b0111 = 0b0000, and 16 & 15 = 0b10000 & 0b01111 = 0b00000.
//         // If n is not a power of 2, it will have more than one bit set, and the bitwise AND operation will result in a non-zero value.

//         return n > 0 && (n & (n - 1)) == 0;
//     }
// };
