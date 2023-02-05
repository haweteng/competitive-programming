class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        if(n==k) return "0";
        stack<char> stack;
        stack.push(num[0]);
        for(int i=1; i<n; i++){
            while(!stack.empty() && k>0 && stack.top() > num[i]){
                stack.pop(); k--;
            }
            if(stack.empty() && num[i]=='0') continue;
            stack.push(num[i]);
        }
        while(!stack.empty() && k>0){
            stack.pop(); k--;
        }
        
        if(stack.empty()) 
        return "0";
        string result="";
        while(!stack.empty()){
            result+=stack.top();
            stack.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
