class Solution {
public:
    int distMoney(int m, int c) {
        int ans = 0;
        if(m<c) return -1;
        if(m>c*8) return c-1;
        while(m>0 && m-8 >= c-1){
            ans++;
            m-=8;
            c--;
        }
        
        if(m==4 && c ==1) ans--;
        
        return ans;
        
    }
};
