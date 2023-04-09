// Find the Difference


class Solution {
public:
    char findTheDifference(string s, string t) {
      sort(s.begin(),s.end());
      sort(t.begin(),t.end());
      int n=t.size();
      char ans;
      for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
          ans+=t[i];
          break;
        }
        else{
          ans=0;
        }
      }
      return ans;
        
    }
};

















// class Solution {
// public:
//     char findTheDifference(string s, string t) {
//         int n=s.size();
//         int m=t.size();
//         char ans;
//         for(int i=n;i<m;i++){
//           ans = t[i];
//         }
//         return ans ;
//     }
// };
