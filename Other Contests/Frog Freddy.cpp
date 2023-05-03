#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

struct Leaf {
    int x, y;
    bool active;
};

int main() {
    int n, m;
    cin >> n >> m;

    string commands;
    cin >> commands;

    vector<Leaf> leaves(n);
    for (int i = 0; i < n; i++) {
        cin >> leaves[i].x >> leaves[i].y;
        leaves[i].active = true;
    }

    int currLeaf = 0;
    for (char c : commands) {

        int dx = 0, dy = 0;
        if (c == 'A') dx = dy = 1;
        else if (c == 'B') dx = 1, dy = -1;
        else if (c == 'C') dx = -1, dy = 1;
        else if (c == 'D') dx = dy = -1;


        int nextLeaf = -1;
        int maxDist = -1;
        for (int i = 0; i < n; i++) {
            if (leaves[i].active) {
                int dist = (leaves[i].x - leaves[currLeaf].x) * dx +
                           (leaves[i].y - leaves[currLeaf].y) * dy;
                if (dist > 0 && dist > maxDist) {
                    maxDist = dist;
                    nextLeaf = i;
                }
            }
        }

 
        if (nextLeaf != -1) {
            currLeaf = nextLeaf;
            leaves[nextLeaf].active = false;
        }
    }

    cout << leaves[currLeaf].x << " " << leaves[currLeaf].y << endl;

    return 0;
}
