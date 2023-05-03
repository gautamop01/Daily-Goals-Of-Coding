#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],e=0,o=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            e++;
        else
            o++;
    }
    cout<<min(e,o)<<endl;
    return 0;
}
