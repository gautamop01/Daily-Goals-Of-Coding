#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int testop;
cin >> testop;
while(testop--) {
double a, b;
cin >> a >> b;
double p = 0.01 * (100-a) * 100; 
double q = 0.01 * (100-b) * 200; 
if(p < q) {
cout << "FIRST" << endl;
}
else if(q < p) {
cout << "SECOND" << endl;
}
else {
cout << "BOTH" << endl;
}
}
return 0;
}