#include <iostream>
using namespace std;

int main() {
	int testOp;
	cin>>testOp;
	while (testOp--)
	{
	    int maxT,maxN,sumN;
	    cin>>maxT>>maxN>>sumN;
	    int divVal = sumN/maxN;
	    int modVal = sumN%maxN;
	    if (divVal<maxT) cout<<modVal*modVal+divVal*maxN*maxN<<endl;
	    else cout<<maxN*maxN*maxT<<endl;
	}
	return 0;
}
