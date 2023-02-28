#include<bits/stdc++.h> // include header file with standard library functions
using namespace std; // use standard namespace

#define ll long long // define macro for long long datatype
#define MOD 1000000007 // define macro for mod value
#define SIZE 1e6+2 // define macro for array size
#define endl "\n" // define macro for end of line

// function to solve each testcase
void solve() {
    ll k; cin >> k; // read input for k
    string str1="FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFB";  
    // initialize str1 with a fixed string
    string str2; cin>>str2; // read input for str2
    int n = str1.size(), m = str2.size(); // find size of both strings
    bool found = false; // initialize flag to check if str2 is found in str1
    for (int i = 0; i <= n - m; i++) { // loop through all possible substrings of str1 with same length as str2
        if (str1.substr(i, m) == str2) { // if a substring is equal to str2
            found = true; // set flag to true
            break; // exit loop
        }
    }
    if (found) cout<<"YES"<<endl; // if flag is true, output YES
    else cout<<"NO"<<endl; // else, output NO
}

// main function
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); // optimize input/output streams
    ll t; cin>>t; // read number of test cases
    while(t--){ // loop through all test cases
        solve(); // call solve function for each test case
    }
    return 0; // exit program
}
