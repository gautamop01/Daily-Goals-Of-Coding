#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int board_size, x1, y1, x2, y2;
        cin >> board_size >> x1 >> y1 >> x2 >> y2;
        
        x1 -= 1;
        y1 -= 1;
        x1 = min(x1, board_size - x1 - 1);
        y1 = min(y1, board_size - y1 - 1);
        int dist1 = min(x1, y1);
        
        x2 -= 1;
        y2 -= 1;
        x2 = min(x2, board_size - x2 - 1);
        y2 = min(y2, board_size - y2 - 1);
        int dist2 = min(x2, y2);
        
        cout << abs(dist1 - dist2) << endl;
    }
    return 0;
}
// Codeforces Round 863 (Div. 3)
// Codeforces Round 863 (Div. 3)
