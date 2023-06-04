#include <iostream>
#include <vector>
using namespace std;

vector<int> generateArray(int n) {
    vector<int> arr;
    for (int i = 0; i < n / 2; i++) {
        arr.push_back(i);
        arr.push_back(n - i - 1);
    }
    return arr;
}


void printArray(int n, vector<int> arr) {
    int cs = 0;
    cout << n << " ";
    int i = 0;
    while (i < n - 1) {
        cs += i;
        cout << (arr[i + 1] - arr[i] + n) % n << " ";
        i++;
    }
    cout << endl;
}

int main() {
    int testop;
    cin >> testop;

    while (testop--) {
        int size;
        cin >> size;

        if (size == 1) {
            cout << "1" << endl;
            continue;
        }
        if (size & 1) {
            cout << "-1" << endl;
            continue;
        }

        vector<int> array = generateArray(size);
        printArray(size, array);
    }

    return 0;
}
