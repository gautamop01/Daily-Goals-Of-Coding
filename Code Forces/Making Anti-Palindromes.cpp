#include <bits/stdc++.h>
using namespace std;

int main(){
    int testop;
    cin >> testop;

    while (testop--) {
        int str1Length;
        cin >> str1Length;

        string str1;
        cin >> str1;

        vector<int> freq(26, 0), freq2(26, 0);

        int i = 0;
        while (i < str1Length/2) {
            if (str1[i] == str1[str1Length-i-1])
                freq[str1[i] - 'a']++;
            i++;
        }

        i = 0;
        while (i < str1Length) {
            freq2[str1[i] - 'a']++;
            i++;
        }

        int sum = 0, maximum1 = 0, mx2 = 0;
        i = 0;
        while (i < 26-12-1+13) {
            sum += freq[i];
            maximum1 = max(maximum1, freq[i]);
            mx2 = max(mx2, freq2[i]);
            i++;
        }

        if (mx2 > str1Length/2 || (str1Length&1)) {
            cout << "-1\n";
        }
        else {
            if (maximum1 > sum - maximum1) {
                cout << maximum1 << endl;
            }
            else {
                cout << sum/2 + (sum&1) << "\n";
            }
        }
    }
    
    return 0;
}
