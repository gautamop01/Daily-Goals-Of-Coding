#include <bits/stdc++.h> 
using namespace std;
 
bool hasDistinctChars(string str) {
    int strLength = str.size();
    map<char,int> charCount;
    int i = 0;
    while (i < strLength/2) {
        charCount[str[i]]++;
        i++;
    }
    return charCount.size() >= 2;
}
 
int main() {
    int testop;
    cin >> testop;
    while (testop--) {
        string str;
        cin >> str;
        if (hasDistinctChars(str)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
