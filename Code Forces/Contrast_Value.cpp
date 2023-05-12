#include <bits/stdc++.h>
using namespace std;
 
long long count_alternating_subarrays(vector<long long>& numb) {
    int n = numb.size();
    int count = 0;
    int f = 0;
    int i = 0;
    while (i < n - 1) {
        if (numb[i] > numb[i + 1]) {
            if (f != 1) {
                count++;
            }
            f = 1;
        } else if (numb[i] < numb[i + 1]) {
            if (f != -1) {
                count++;
            }
            f = -1;
        }
        i++;
    }
    return count + 1;
}
 
signed main() {
    int testop;
    cin >> testop;
    while (testop--) {
        int n;
        cin >> n;
        vector<long long> numb(n);
        int i = 0;
        while (i < n) {
            cin >> numb[i];
            i++;
        }
        cout << count_alternating_subarrays(numb) << endl;
    }
    return 0;
}
