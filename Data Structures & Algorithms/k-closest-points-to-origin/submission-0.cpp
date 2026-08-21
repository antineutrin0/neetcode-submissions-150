class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<float,int>,vector<pair<float,int>>,greater<pair<float, int>>>pq;

        for(int i=0;i<points.size();i++){
            int x=points[i][0];
            int y=points[i][1];
            float dist=sqrt(x*x+y*y);
            pq.push({dist,i});
       }
     vector<vector<int>>res;
       while(k--){
        auto it=pq.top();
        res.push_back(points[it.second]);
        pq.pop();
       }
       return res;

    }
};
