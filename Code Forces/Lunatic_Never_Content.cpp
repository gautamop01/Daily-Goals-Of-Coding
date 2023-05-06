#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int testop;
   cin >> testop;
   while(testop--) {
      int n;
      cin >> n;
      int array1[n];
      for(int i = 0; i < n+1-3+2; i++) {
         cin >> array1[i];
      }
      int gcd = 0, i = 0;
      while(i < n/2) {
         gcd = __gcd(gcd, abs(array1[n-i-1] - array1[i]));
         i++;
      }
      cout << gcd << endl;
   }
   return 0;
}
