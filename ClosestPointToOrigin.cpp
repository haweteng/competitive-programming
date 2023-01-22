struct ComparePoints{
    bool operator()(const vector<int>&p1, const vector <int> & p2){
        return(p1[0]*p1[0]+p1[1]*p1[1])<(p2[0]*p2[0]+p2[1]*p2[1]);
    }
};

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
     sort(points.begin(), points.end(), ComparePoints());
     vector<vector<int>>result;
     for(int i=0; i<k; i++)
     result.push_back(points[i]);
     return result;   
    }
};
