// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n = prices.size();
//         int min = prices[0];
//         int max ;


//         int store;
//         for(int i=0;i<n;i++){
//             if(prices[i]<min){
//                 min = prices[i];
//                 store = i;
//             }
//             max = prices[store];
//             for(int j=store;j<n;j++){
//             if(prices[j]>max){
//                 max = prices[j];
//             }
//             }

//         }
//         int answer = max - min;
//         return answer;
        
//     }
// };

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minPrice = prices[0];
        int maxProfit = 0;
        for (int i = 1; i < n; i++) {
            int currPrice = prices[i];
            if (currPrice < minPrice) {
                minPrice = currPrice;
            } else {
                int profit = currPrice - minPrice;
                if (profit > maxProfit) {
                    maxProfit = profit;
                }
            }
        }
        return maxProfit;
    }
};

/*
// Correct But TLE
*/
