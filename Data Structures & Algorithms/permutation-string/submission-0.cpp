class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<int,int>mp;
        for(int i=0;i<s1.size();i++)
         mp[s1[i]]++;

         for(int i=0;i<s2.size();i++){
            map<int,int>mp2;
            for(int j=i;j<i+s1.size();j++){
               mp2[s2[j]]++;
            }
            if(mp==mp2)
            return true;
         }
          return false;
        
    }
};
