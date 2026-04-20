class Solution {
public:
    bool isPalindrome(string s) { 
        string str;
        for(int i =0;i<s.size();i++){
            if(s[i] != ' ' && isalnum(s[i])){
                str += (char)tolower(s[i]);
            }
        }
        int j = 0, k = str.size()-1;
        cout<<str;
        while(j<k){
            if(str[j] != str[k]){
                return false;
            } 
            j++;
            k--;
        }
        return true;
    }
};
