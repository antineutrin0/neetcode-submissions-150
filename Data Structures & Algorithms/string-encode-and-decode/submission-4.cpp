class Solution {
public:
    vector<int>vec;
    string encode(vector<string>& strs) {
    string str="";
    vec.push_back(0);
    for(auto s:strs)
    {
       
       str+=s;
       vec.push_back(vec[vec.size()-1]+s.size());
    }
    return str;
    }

    vector<string> decode(string s) {

        vector<string>ans(vec.size()-1,"");
        int k=1;
        for(int i=0;i<s.size();i++){
            if(i<vec[k])
             ans[k-1]+=s[i];
            else
             {
                k++;
                ans[k-1]+=s[i];
             }
        }
           
     return ans;

    }
};
