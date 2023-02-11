class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> m(26, 0), ans;
        for (char c : p)
            ++m[c - 'a'];
        
        int i = 0, j = 0, counter = p.length(); 
        while (j < s.length()) {
            if (m[s[j++] - 'a']-- > 0)
                --counter;
            
            if (!counter)
                ans.push_back(i);
            
            if (j - i == p.length() && m[s[i++] - 'a']++ >= 0)
                ++counter;
        }
        return ans;
    }
};
