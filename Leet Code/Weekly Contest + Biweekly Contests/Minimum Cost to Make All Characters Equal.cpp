class Solution {
public:
    long long minimumCost(std::string s) {
        int n = s.length();
        long long c = 0;
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]){
                c+= std::min(i+1,n-i-1);
            }
        }
        return c;
    }
};
