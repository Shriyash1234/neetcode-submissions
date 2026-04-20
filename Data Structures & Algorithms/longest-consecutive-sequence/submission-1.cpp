class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool> mp;
        for(int i =0;i<nums.size();i++){
            mp[nums[i]] = true;
        }
        int res = 0;
       for(int i = 0;i<nums.size();i++){
        if(mp[nums[i]-1] == false){
            int current = 0;
            int j = 0;
            while(mp[nums[i]+j]){
                current++;
                j++;
            }
            res = max(res,current);
        }
       }
       return res;
    }
};
