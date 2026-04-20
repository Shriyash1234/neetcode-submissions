class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> groups;
        for(int i =0;i<strs.size();i++){
            map<char,int> charCounts;
            for(int j =0;j<strs[i].size();j++){
                charCounts[strs[i][j]]++;
            }
            string str;
            for(auto it:charCounts){
                str += it.first;
                str += it.second + '0';
            }
            groups[str].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto it:groups){
            // for(int i =0;i<it.second.size();i++){
                
            // }
            ans.push_back(it.second);    
        }
         
        return ans;
    }
};
