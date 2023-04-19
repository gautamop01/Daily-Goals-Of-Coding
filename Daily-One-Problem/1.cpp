#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= k; j++) {
                int room_number = (i * 100) + j;
                sum += room_number;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
