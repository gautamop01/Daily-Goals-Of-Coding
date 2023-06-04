#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int testop;
    cin >> testop;
    
    while (testop--) {
        
        int size;
        cin >> size;
        
        vector<int> numbers(size);
        for (int i = 0; i < size; i++) {
            cin >> numbers[i];
        }
 
        int indexA = 0, indexB = 0, indexC = 0, currentIndex = 0;
        while (currentIndex < size) {
            if (numbers[currentIndex] == 1) {
                indexA = currentIndex;
            } else if (numbers[currentIndex] == 2) {
                indexB = currentIndex;
            } else if (numbers[currentIndex] == size) {
                indexC = currentIndex;
            }
            currentIndex++;
        }
        
        if (indexC != 0 && indexC != size - 1) {
            if (indexA < indexC) {
                cout << indexB + 1 << " " << indexC + 2 << endl;
            } else {
                cout << indexB + 1 << " " << indexC << endl;
            }
        } else {
            if (indexC < indexA && indexB < indexA) {
                cout << indexB + 1 << " " << indexC + 1 << endl;
            } else if (indexC > indexA && indexB > indexA) {
                cout << indexB + 1 << " " << indexC + 1 << endl;
            } else {
                cout << indexA + 1 << " " << indexC + 1 << endl;
            }
        }
    }
    
    return 0;
}
