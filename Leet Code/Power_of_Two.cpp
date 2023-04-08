// Passed
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;
        }
        return (n & (n - 1)) == 0;
    }
};



// Time Limit Exceeded
#include <cmath>

class Solution {
public:
    bool isPowerOfTwo(int n) {

        if(n==1)
                return true;
         if(n==2)
                return true;
    
    
        for(int i=0;i<n-1;i++){
            
            if(pow(2,i)==n){
                return true;
            }
        }

        return false;
        
    }

};
