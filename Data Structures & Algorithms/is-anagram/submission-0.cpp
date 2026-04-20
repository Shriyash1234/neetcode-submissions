class Solution {
public:
    bool isAnagram(string s, string t) {
       map<char,int> charCountsFirst;
       map<char,int> charCountsSecond;
       if(s.size() != t.size()){
        return false;
       }
       for(int i = 0;i<s.size();i++){
        charCountsFirst[s[i]]++;
       } 
        for(int i = 0;i<t.size();i++){
        charCountsSecond[t[i]]++;
       } 
       for(auto it:charCountsFirst){
        if(charCountsSecond[it.first] != it.second){
            return false;
        }
       }
       return true;
    }
};
