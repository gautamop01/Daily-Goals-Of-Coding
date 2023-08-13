#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "geeksforgeeks";
    int n = s.size();
    int freq[26];

    for(int i = 0; i < 26; i++)
        freq[i] = 0; // Initialize with zero
    
    for(int i = 0; i < n; i++)
        freq[s[i] - 'a']++;
    
    for(int i = 0; i < 26; i++){
        if(freq[i] > 1){
            cout << char('a' + i) << ", count = " << freq[i] << endl;
        }
    }

    return 0;
}
