class Solution {
public:

    string encode(vector<string>& strs) {
        string combinedStr;
        for(int i =0;i<strs.size();i++){
            combinedStr+= strs[i] + "???";
        }
        return combinedStr;
    }

   vector<string> decode(string s) {
    vector<string> ans;
    int i = 0;
    int n = s.size();

    while (i < n) {
        string temp;

        // build string until delimiter "???"
        while (i < n && (i + 2 >= n || s.substr(i, 3) != "???")) {
            temp += s[i];
            i++;
        }

        ans.push_back(temp);

        // skip delimiter "???"
        i += 3;
    }

    return ans;
}
};
