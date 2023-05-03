// class Solution {
// public:
//     string reverseVowels(string s) {
//         int n = s.size();
//         string ans;
//         for(int i=0;i<s.size();i++){
//             ans[i]=s[i];
//             for(int j=1;j<s.size();i++){
//                 if(s[i]==s[j]){
//                 ans[j]=s[i];
//                 }

//             }
//             s=ans;
//         }
//         return s;
//     }
// };


class Solution{
public:
       string reverseVowels(string s){
           int n = s.size();
           int my_dict[256] = {0};
           my_dict['a'] = 1, my_dict['A'] = 1;
           my_dict['e'] = 1, my_dict['E'] = 1;
           my_dict['i'] = 1, my_dict['I'] = 1;
           my_dict['o'] = 1, my_dict['O'] = 1;
           my_dict['u'] = 1, my_dict['U'] = 1;
           int start = 0, end = n -1;
           while(start < end){
               while(start < end && my_dict[s[start]] == 0) start++;
               while(start < end && my_dict[s[end]] == 0) end--;
               swap(s[start],s[end]);
               start++; end--;
           }
           return s;

       }

};
