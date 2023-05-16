class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0; // Initialize a variable to store the reversed bits
        
        for (int i = 0; i < 32; i++) {
            result = (result << 1) + (n >> i & 1);
            // Left shift 'result' by 1 to make space for the next bit
            // Add the rightmost bit of 'n' (obtained by shifting 'n' by 'i' positions and using bitwise AND with 1)
            // Update 'result' with the new bit combination
        }
        
        return result; // Return the reversed bits
    }
};

// class Solution {
// public:
//     uint32_t reverseBits(uint32_t n) {
//          uint32_t ans = 0; 
//           uint32_t result = 0;
//       for(int i = 31; i >= 0; i--){
//           result = result << 1;
//         //   result = result + (result % 2);
//        uint32_t rightmost_bit = n & 1;
//           result = result | rightmost_bit;
//                 n = n >> 1;
//       }
//       return result;
//     }
// };
