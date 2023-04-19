#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    int n, k;
    string a, m;
    cin >> n >> k >> a >> m;

    vector<int> diff(n);
    for (int i = 0; i < n; i++) {
        diff[i] = (m[i] - a[i] + 26) % 26;
    }

    vector<int> count(26);
    for (int d : diff) {
        if (d == 0 || d == 2 * k || d == 24) {
            continue;
        }
        count[d]++;
    }
    int max_count = *max_element(count.begin(), count.end());

    int num_ops = n - max_count;
    for (int i = 0; i < n; i++) {
        if (diff[i] == 0 || diff[i] == 2 * k || diff[i] == 24) {
            continue;
        }
        if (count[diff[i]] == max_count) {
            if (diff[i] == 2) {
                num_ops += (max_count - count[0] + k - 1) / k;
            } else {
                num_ops++;
            }
        }
    }

    cout << num_ops * k << endl;

    return 0;
}
