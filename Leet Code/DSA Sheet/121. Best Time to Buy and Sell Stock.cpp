class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minprice=prices[0];
        int profit=0;
        for(int i=0;i<n;i++){
            int curr = prices[i];
            if(curr <= minprice ){
                minprice = curr;
            }
            else{
                if(curr-minprice >= profit ){
                    profit = curr-minprice;
                }
            }
        }
        return profit;
    }
};
