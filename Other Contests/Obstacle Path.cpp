#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

const int MAXN = 1010;
const int MAXX = 100000010;

int T, X, Y, N;
int cx[MAXN], cy[MAXN], r[MAXN];
bool vis[MAXN][MAXN];

bool inside_circle(int x, int y, int i) {
    int dx = x - cx[i];
    int dy = y - cy[i];
    return dx*dx + dy*dy <= r[i]*r[i];
}

bool inside_rect(int x, int y) {
    return x >= 0 && x <= X && y >= 0 && y <= Y;
}

bool bfs() {
    memset(vis, false, sizeof(vis));
    queue<pair<int,int>> q;
    q.push(make_pair(0,0));
    vis[0][0] = true;
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if (x == X && y == Y) {
            return true;
        }
        if (inside_rect(x+1,y) && !vis[x+1][y] && 
                !any_of(r, r+N, [x,y](int r){ return inside_circle(x+1,y,r); })) {
            q.push(make_pair(x+1,y));
            vis[x+1][y] = true;
        }
        if (inside_rect(x-1,y) && !vis[x-1][y] && 
                !any_of(r, r+N, [x,y](int r){ return inside_circle(x-1,y,r); })) {
            q.push(make_pair(x-1,y));
            vis[x-1][y] = true;
        }
        if (inside_rect(x,y+1) && !vis[x][y+1] && 
                !any_of(r, r+N, [x,y](int r){ return inside_circle(x,y+1,r); })) {
            q.push(make_pair(x,y+1));
            vis[x][y+1] = true;
        }
        if (inside_rect(x,y-1) && !vis[x][y-1] && 
                !any_of(r, r+N, [x,y](int r){ return inside_circle(x,y-1,r); })) {
            q.push(make_pair(x,y-1));
                        vis[x][y-1] = true;
        }
    }
    return false;
}

int main() {
    cin >> T;
    while (T--) {
        cin >> X >> Y >> N;
        for (int i = 0; i < N; i++) {
            cin >> cx[i] >> cy[i] >> r[i];
        }
        if (bfs()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
