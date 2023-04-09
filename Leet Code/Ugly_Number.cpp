// class Solution {
// public:
//     bool isUgly(int n) {
//         if(n==1) return true;
//         if(n%2==0) return true;
//         if(n%3==0) return true;
//         if(n%5==0) return true;
//         if(n==2*3 || n==2*5 || n==3*5) return true;
//         else return false;
//     }
// };

class Solution {
public:
    bool isUgly(int n) {
        if(n <= 0) return false;
        while(n % 2 == 0) n /= 2;
        while(n % 3 == 0) n /= 3;
        while(n % 5 == 0) n /= 5;
        return n == 1;
    }
};



// class Solution {
// public:
//     bool isUgly(int n) {
//         if(n==1){
//             return true;
//         }
//         else if(n==2*3 || n==2*5 || n==3*5) return true;
//         else return false;
//     }
// };
