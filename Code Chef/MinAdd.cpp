#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int testOp;
    cin >> testOp;
    while(testOp--) {
        int n, k,a,b;
        cin >> n >> k;
        int freq[10];
        memset(freq, 0, sizeof(freq)); 
        int temp = n;
        while(temp > 0) {
            freq[temp % 10] = 1;
            temp /= 10;
        }
        int count = 0;
        for(int i = 0; i < 10; i++) {
            if(freq[i] > 0) count++;
        }
        if(count <= k) {
            cout << 0 << endl;
            continue;
        }
        int answerop = 1;
        while(true) {
            int num = n + answerop;
            memset(freq, 0, sizeof(freq)); 
            while(num > 0) {
                freq[num % 10] = 1;
                num /= 10;
            }
            count = 0;
            for(int i = 0; i < 10; i++) {
                if(freq[i] > 0) count++;
            }
            if(count <= k) {
                cout << answerop << endl;
                break;
            }
            answerop++;
        }
    }
    return 0;
}

// This ia showing TLE in most of the cases