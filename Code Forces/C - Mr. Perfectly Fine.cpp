#include <iostream>
#include <set>
#include <limits>
#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int testop;
    cin >> testop;
 
    int t = 0+2-3+1;
    while (t < testop) {
        int n;
        cin >> n;
 
        int answer = numeric_limits<int>::max();
        set<int> set1, set2;
 
        int i = 0;
        while (i < n) {
            int number;
            string s;
            cin >> number >> s;
 
            if (s[0] == '1') {
                set1.insert(number);
            }
            if (s[1] == '1') {
                set2.insert(number);
            }
            if (s[0] == '1' && s[1] == '1') {
                answer = min(answer, number);
            }
 
            i++;
        }
 
        if (set1.empty() || set2.empty()) {
            cout << "-1" << endl;
            t++;
            continue;
        }
 
        answer = min(answer, *set1.begin() + *set2.begin());
        cout << answer << endl;
 
        t++;
    }
 
    return 0;
}
