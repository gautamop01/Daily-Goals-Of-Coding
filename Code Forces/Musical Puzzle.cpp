#include <string>
#include <unordered_set>
using namespace std;
 
int main() {
    int testop;
    cin >> testop;
 
    while (testop--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        unordered_set<string> melodies;
        int i = 0;
        while (i < n - 1) {
            string melody = s.substr(i, 2);
            melodies.insert(melody);
            i++;
        }
 
        int minMelodies = melodies.size();
        cout << minMelodies << endl;
    }
 
    return 0;
}
