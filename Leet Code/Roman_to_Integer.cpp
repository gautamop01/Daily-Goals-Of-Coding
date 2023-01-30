class Solution {
public:
    int romanToInt(string s) {
        int cnt=0;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='I'){
                cnt=cnt+1;
                if(i<n-1 && s[i+1]=='V') {
                    cnt+=3;
                    i++;
                }
                else if(i<n-1 && s[i+1]=='X') {
                    cnt+=8;
                    i++;
                }
            }
            else if(s[i]=='V'){
                cnt+=5;
            }
            else if(s[i]=='X'){
                cnt+=10;
                if(i<n-1 && s[i+1]=='L') {
                    cnt+=30;
                    i++;
                }
                else if(i<n-1 && s[i+1]=='C') {
                    cnt+=80;
                    i++;
                }
            }
            else if(s[i]=='L'){
                cnt+=50;
            }
            else if(s[i]=='C'){
                cnt+=100;
                if(i<n-1 && s[i+1]=='D') {
                    cnt+=300;
                    i++;
                }
                else if(i<n-1 && s[i+1]=='M') {
                    cnt+=800;
                    i++;
                }
            }
            else if(s[i]=='D'){
                cnt+=500;
            }
            else if(s[i]=='M'){
                cnt+=1000;
            }
        }
        return cnt;
    }
};
