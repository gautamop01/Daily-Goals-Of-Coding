class Solution {
public:
    bool divisorGame(int n) {
        if(n%2==0) return true;
        else return false;
        
    }
};


// class Solution {
// public:
//     bool divisorGame(int n) {
//         vector<bool> memo(n + 1, false);
//         memo[1] = false;
//         for (int i = 2; i <= n; ++i) {
//             for (int j = 1; j < i; ++j) {
//                 if (i % j == 0 && !memo[i - j]) {
//                     memo[i] = true;
//                     break;
//                 }
//             }
//         }
//         return memo[n];
//     }
// };
