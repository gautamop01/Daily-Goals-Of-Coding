#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int num_tests;
    cin >> num_tests;
    while (num_tests--) {
        int n, x, cnt = 1;
        cin >> n >> x;
        if ((x > n + 1) || (x < 0 && abs(x) >= n)) {
            cout << -1 << endl;
            continue;
        }
        if (x > 0) {
            vector<char> sequence(n, '+');
            int i = 0;
            while (i < n) {
                if (cnt != x) {
                    cnt++;
                } else {
                    sequence[i] = '*';
                }
                i++;
            }
            for (char c : sequence) {
                cout << c;
            }
            cout << '\n';
        } else {
            vector<char> sequence(n, '-');
            int i = 0;
            while (i < n) {
                if (cnt != x) {
                    cnt--;
                } else {
                    sequence[i] = '*';
                }
                i++;
            }
            for (char c : sequence) {
                cout << c;
            }
            cout << '\n';
        }
    }
    return 0;
}