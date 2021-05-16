//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx = INT_MIN, mn = INT_MAX, ans = INT_MIN;
        
        for(int i=0;i<prices.size();i++){
            // we will check if prices value is less than mn then we will initialise mn with prices;
            if(prices[i]<mn){
                mn = prices[i];
                mx = prices[i];
            }
            if(prices[i]>mn){
                mx = prices[i];
            }
            ans = max(ans,mx-mn);
        }
        
        return ans;
    }
};
