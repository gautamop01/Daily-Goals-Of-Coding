#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);

        int i = 0;
        while(i < n){
            cin >> a[i];
            i++;
        }

        i = 0;
        while(i < n){
            if(a[i]<=i+1){
                cout << "YES" << endl;
                break;
            }
            i++;
        }
        if(i == n){
            cout << "NO" << endl;
        }
    }

    return 0;
}
