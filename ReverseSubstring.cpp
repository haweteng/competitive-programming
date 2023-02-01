class Solution {
public:
    string reverseParentheses(string s) {
        deque < string > st;
        string curr = "";
        int n = s.size();

        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                st.push_back(curr);
                curr = "";
            }
            else if(s[i] == ')'){
                reverse(curr.begin(),curr.end());
                curr = st.back() + curr;
                st.pop_back();
            }else
                curr += s[i];
        }
        return curr;
    }
};
Console
