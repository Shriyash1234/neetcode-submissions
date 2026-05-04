class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        int i = 0;
        int n = s.size();
        if(n%2 != 0){
            return false;
        }
        while(i<n){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') st.push(s[i]);
            else if (st.size()>0) {
                if(s[i] == ')' && st.top() == '('){
                    st.pop();
                }
                else if(s[i] == '}' && st.top() == '{'){
                    st.pop();
                }
                else if(s[i] == ']' && st.top() == '['){
                    st.pop();
                } else {
                    return false;
                }
            }
            else{
                return false;
            }
            i++;
        }
        if(st.size() ==0) return true;
        return false;
    }
};
