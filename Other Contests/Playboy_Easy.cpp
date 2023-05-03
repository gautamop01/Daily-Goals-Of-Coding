#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int ans = 1;
        for(int i = 2; i <= n; i++) {
            ans *= i;
        }
        cout << ans << endl;
    }
    return 0;
}
