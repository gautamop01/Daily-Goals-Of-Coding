#include <vector>
#include <limits>

class Solution {
public:
    int buyChoco(std::vector<int>& prices, int money) {
        int minPrice1 = numeric_limits<int> max();  
        int minPrice2 = numeric_limits<int> max();
        
        for (int price : prices) {
            if (price < minPrice1) {
                minPrice2 = minPrice1;
                minPrice1 = price;
            } else if (price < minPrice2) {
                minPrice2 = price;
            }
        }
        
        int leftover = money - (minPrice1 + minPrice2);
        return leftover >= 0 ? leftover : money;
    }
};
