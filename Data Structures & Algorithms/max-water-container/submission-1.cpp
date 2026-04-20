class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i =0, j = n-1;
        int maxAmount = 0;
        int currentAmount = 0;
        while(i<j){
            currentAmount = min(heights[i], heights[j]) * (j-i);
            maxAmount = max(maxAmount, currentAmount);
            if(heights[i] > heights[j]){
                j--;
            } else{
                i++;
            }
        }
        return maxAmount;
    }
};
