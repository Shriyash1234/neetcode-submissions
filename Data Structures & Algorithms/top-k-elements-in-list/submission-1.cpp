class Solution {
public:
    static bool sortBySecond(vector<int>first,vector<int>second){
        if(first[1] == second[1]){
            return first[0]>second[0];
        }
        return first[1]>second[1];
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
      map<int,int> mp;
      for(int i =0;i<nums.size();i++){
        mp[nums[i]]++;
      }
      vector<vector<int>> eleCounts;
      for(auto it:mp){
        eleCounts.push_back({it.first,it.second});
      }
      sort(eleCounts.begin(), eleCounts.end(), sortBySecond);
      vector<int> ans;
      for(int i =0;i<k;i++){
        ans.push_back(eleCounts[i][0]);
      }
      return ans;
    }
};
