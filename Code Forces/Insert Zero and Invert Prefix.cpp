// C 
#include <bits/stdc++.h>
using namespace std;
 
void pZeros(int startIndex, int endIndex, vector<int>& arr) {
    for (int i = startIndex; i < endIndex; i++) {
        cout << "0 ";
    }
}
 
int main() {
    int testop;
    cin >> testop;
 
    for (int testCase = 0; testCase < testop; testCase++) {
        int arraySize;
        cin >> arraySize;
 
        vector<int> inputArray(arraySize);
        for (int i = 0; i < arraySize; i++) {
            cin >> inputArray[i];
        }
 
        if (inputArray[arraySize - 1] == 0) {
            cout << "YES" << endl;
            int i = arraySize - 1;
            for (; i >= 0; ) {
                int currentIndex = i, maxElement = 0, sumOfOnes = 0;
                for (; currentIndex >= 0 && maxElement <= inputArray[currentIndex]; currentIndex--) {
                    maxElement = inputArray[currentIndex];
                    sumOfOnes += inputArray[currentIndex];
                }
                pZeros(currentIndex + 1, i, inputArray);
                cout << sumOfOnes << " ";
                i = currentIndex;
            }
            cout << endl;
        } else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}
