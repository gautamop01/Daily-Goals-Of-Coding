#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;
 
void printPattern(int rows, int columns) {
    int start = (2 * columns) + 1;
    while (start <= rows * columns) {
        int i = 0;
        while (i < columns) {
            cout << start + i << " ";
            i++;
        }
        cout << endl;
        start += 2 * columns;
    }
    int i = 1;
    while (i <= columns) {
        cout << i << " ";
        i++;
    }
    cout << endl;
    start = 3 * columns + 1;
    while (start <= 4 * columns) {
        cout << start << " ";
        start++;
    }
    cout << endl;
    start = columns + 1;
    while (start <= rows * columns) {
        if (start == 3 * columns + 1) {
            start += 2 * columns;
            continue;
        }
        int i = 0;
        while (i < columns) {
            cout << start + i << " ";
            i++;
        }
        cout << endl;
        start += 2 * columns;
    }
}
 
int main() {
    int testop;
    cin >> testop;
    while (testop--) {
        int numRows, numColumns;
        cin >> numRows >> numColumns;
        printPattern(numRows, numColumns);
    }
 
    return 0;
}
