class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int totalProduct = 1;
        vector<int> zeroPos;
        for(int i =0;i<nums.size();i++){
            if(nums[i] == 0){
                zeroPos.push_back(i);
            }
            else{
                totalProduct *= nums[i];
            }
        }
        vector<int> ans;
        int numZeros = zeroPos.size();
        for(int i =0;i<nums.size();i++){
            if(numZeros == 1 && zeroPos[0] == i){
                ans.push_back(totalProduct);
            } else if (numZeros >= 1){
                ans.push_back(0);
            } else{
                ans.push_back(totalProduct/nums[i]);
            }
        }
        return ans;
    }
};
