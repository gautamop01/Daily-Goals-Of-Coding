class Solution {
public:
    int lengthOfLastWord(string s) {

        int count = 0;
        bool counting_last_word = false;

        for(int i = s.size() - 1; i >= 0; i--) {
            if(s[i] != ' ') {
                counting_last_word = true;
                count++;
            } else if(counting_last_word) {
                break;
            }
        }

        return count;
  

   




//     int n = s.size();
//     int ans = 0;
//     for(int i = n-1; i >= 0; i--) {
//         if(s[i] != ' ') {
//             ans++;
//         } else if(s[i] == ' ') {
//             break; // exit loop when first space is encountered
//         }
//     }
//     return ans;

    }
};
