// Using Recursion

class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        else{
            return fib(n-1)+fib(n-2);
        }
        
    }
};

// using DP  beats 100% 
class Solution {
public:
    int fib(int n) {
        int f[n+2];
        int i;
        f[0]=0;
        f[1]=1;
        for(int i=2;i<=n;i++){
            f[i]=f[i-1]+f[i-2];
        }
        return f[n];
        
    }
};

// Optamize space 

class Solution {
public:
    int fib(int n) {
        int i;
        int a =0; int b=1; int c;
        if(n==0) return a;
        for(int i=2;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
           
        }
        return b;
        
    }
};
