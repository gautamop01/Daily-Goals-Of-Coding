
#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int x = 0, y = 0;
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'L') x--;
            else if (s[i] == 'R') x++;
            else if (s[i] == 'U') y++;
            else y--;
            if (x == 1 && y == 1) {
                found = true;
                break;
            }
        }
        if (found) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
