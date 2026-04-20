class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int ans = INT_MIN;
        for(int i = 1;i<prices.size();i++){
            mini = min(prices[i-1], mini);
            if(prices[i]>mini) ans = max(prices[i] - mini,ans);
        }
        return max(ans,0);
    }
};
