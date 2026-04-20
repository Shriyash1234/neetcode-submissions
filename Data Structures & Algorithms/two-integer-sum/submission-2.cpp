class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,vector<int>> positions;
        for(int i = 0;i<nums.size();i++){
            positions[nums[i]].push_back(i);
        }
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = nums.size()-1;
        while(i<j){
            if(nums[i] + nums[j] == target){
                if(positions[nums[i]][0] > positions[nums[j]][0]){
                    return {positions[nums[j]][0],positions[nums[i]][0]};
                } else if(positions[nums[i]][0] == positions[nums[j]][0]){
                    return {positions[nums[i]][0],positions[nums[i]][1]};
                }
                else{
                    return {positions[nums[i]][0],positions[nums[j]][0]};
                }
            }
            if(nums[i] + nums[j] >target){
                j--;
            }
            else{
                i++;
            }
        }
        return {-1,-1};
    }
};
