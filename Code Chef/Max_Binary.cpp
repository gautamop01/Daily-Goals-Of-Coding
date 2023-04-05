#include <iostream>
#include <string>
using namespace std;

int main() {
    int t,m,n;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        if(s[0] == '0') {
            k--;
            s[0] = '1';
        }
        for(int j = 0; j < k; j++) {
            s += '0';
        }
        cout << s << endl;
    }
    return 0;
}
