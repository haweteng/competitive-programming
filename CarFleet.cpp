class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> v;
        for(int i = 0; i < position.size(); i++)
            v.push_back({position[i],speed[i]});
        sort(v.begin(),v.end(),greater<>());
        stack<pair<int,int>> s;
        for(int i = 0; i < position.size(); i++)
        {
            double t1,t2;
            t1 = (double)(target-v[i].first)/v[i].second;
            if(!s.empty())
                t2 = (double)(target - s.top().first)/s.top().second;

            s.push(v[i]);
            if(s.size() > 1)
            {
                if(t1 <= t2)
                    s.pop();
            }
        }
        return s.size();
    }
};
