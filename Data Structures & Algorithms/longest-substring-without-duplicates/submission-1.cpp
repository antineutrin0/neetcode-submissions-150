class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>vis(1000,0);
        int maxlen=0,curlen=0;
        for(int i=0;i<s.size();i++){
            if(vis[s[i]])
            {
                maxlen=max(maxlen,curlen);
                for(int j=i-curlen;j<i;j++)
                    if(s[j]!=s[i])
                     {
                        curlen--;
                       vis[s[j]]=0;
                     }
                     else
                       break;
            }
            else
            {
                vis[s[i]]=1;
                curlen++;
            }

        }
         maxlen=max(maxlen,curlen);
        return maxlen;
    }
};
