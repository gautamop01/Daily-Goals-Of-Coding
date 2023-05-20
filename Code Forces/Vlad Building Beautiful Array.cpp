#include <iostream>
#include <algorithm>
 
int main() {
    int testop;
    std::cin >> testop;
 
    while (testop--) {
        int length;
        std::cin >> length;
        int input[length];
 
        int i = 0;
        while (i < length) {
            std::cin >> input[i];
            i++;
        }
 
        std::sort(input, input + length);
 
        bool isBeautiful = true;
 
        int j = 1;
        while (j < length) {
            if (input[0] % 2 == input[j] % 2 || input[0] % 2 == (input[j] - input[0]) % 2) {
                j++;
                continue;
            } else {
                isBeautiful = false;
                break;
            }
        }
 
        if (isBeautiful) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
 
    return 0;
}
