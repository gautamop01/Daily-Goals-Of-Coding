// This Code Showing TLE, Thats's why be use other method called "Sieve of Eratosthenes"
/* 
class Solution {
    private:
    bool isPrime(int n){
        if(n<=1)
        return false;
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
public:
    int countPrimes(int n) { 
       int cnt=0;
       for(int i=2;i<n;i++){
          if(isPrime(i))
              cnt++;    
       }
       return cnt;
    }
};

*/

// Sieve of Eratosthenes
class Solution {
public:
    int countPrimes(int n) { 
        int cnt=0;
        vector<bool>prime(n+1,true);
        prime[0]=prime[1]=false;
        for(int i=2;i<n;i++){
            if(prime[i]){
                cnt++;
                for(int j=2*i;j<n;j=j+i){ // Here this step give all Multiply of n is FALSE (e.g. if in first for loop 3 is prime number is proved then in second loop all 3 table number 3,6,9,12,15,18... is Non Prime Proved ) 
                    prime[j]=0;
                }
            }
        }
        return cnt;
        
    }
};


