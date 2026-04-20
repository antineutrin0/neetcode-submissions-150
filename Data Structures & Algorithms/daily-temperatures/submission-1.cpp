class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>res;
        for(int i=0;i<temperatures.size();i++)
        {
            int curr=temperatures[i];
            for(int j=i+1;j<temperatures.size();j++)
        {
            if(temperatures[j]>temperatures[i])
              {res.push_back(j-i);break;}
            
        }
        if(res.size()<i+1)
        res.push_back(0);
        }

        return res;
    }
};
