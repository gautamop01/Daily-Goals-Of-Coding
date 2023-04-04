#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 1; i <= t; i++) {
    int n, d;
    cin >> n >> d;

    string s;
    getline(cin, s);
    getline(cin, s);

    string ans = "";
    bool done = false;
    for (int i = 0; i < n; i++) {
      char ch = s[i];
      if (ch - '0' >= d || done) {
        ans += ch;
      } else {
        ans += to_string(d);
        ans += ch;
        done = true;
      }
    }

    if (!done) {
      ans += to_string(d);
    }

    cout << ans << endl;
  }

  return 0;
}
// Codeforces Round 863 (Div. 3)
