class Solution {
  public: vector < vector < int >> threeSum(vector < int > & nums) {
    map < vector<int>, int > mp;
    vector < vector < int >> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
      int j = i + 1, k = nums.size() - 1;
      int target = -nums[i];
      while (j < k) {
        int sum = nums[j] + nums[k];
        if (sum == target) {
          if(mp[{nums[i],nums[j],nums[k]}]){
            j++;
            k--;
            continue;
          }
          else{
            mp[{nums[i],nums[j],nums[k]}]++;
            ans.push_back({
                nums[i],
                nums[j],
                nums[k]
            });
            j++;
            k--;
          }
        } else if (sum > target) {
          k--;
        } else {
          j++;
        }
      }
    }
    return ans;
  }
};