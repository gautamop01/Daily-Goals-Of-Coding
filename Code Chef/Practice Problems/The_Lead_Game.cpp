// #include <iostream>
// using namespace std;

// int main() { int n;
// cin>>n;
// int a[n];
// int b[n];
// for(int i=0;i<n;i++){
//     cin>>a[i]>>b[i];
//     int c[i]=
// }
// for(int i=0;i<n;i++){
//     cout<<i+1<<" "<<a[i]-b[i]<<endl;
    
// }
// 	// your code goes here
// 	return 0;
// }
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n, max_lead = 0, winner = 0, score1 = 0, score2 = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int s, t;
        cin >> s >> t;
        score1 += s;
        score2 += t;
        int lead = abs(score1 - score2);
        if(lead > max_lead) {
            max_lead = lead;
            if(score1 > score2) {
                winner = 1;
            } else {
                winner = 2;
            }
        }
    }
    cout << winner << " " << max_lead << endl;
    return 0;
}
