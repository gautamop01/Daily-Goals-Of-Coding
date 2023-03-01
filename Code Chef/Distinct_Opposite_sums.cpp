#include <iostream>
using namespace std;

int main() {
int testop;
cin >> testop;
while(testop--) {
int n;
cin >> n;
for(int i=1; i<=n/2; i++) {
cout << i << " " << n-i+1 << " ";
}
cout << endl;
}
return 0;
}