class Solution {
    public:int totalcount(vector<int>cnt){
        sort(cnt.begin(),cnt.end()); int unk=0;
        for(int i=0;i<cnt.size()-1;i++){
            unk+=cnt[i];
        }
        return unk;
    }
public:
    int characterReplacement(string s, int k) {
        int maxlen=0;
        for(int i=0;i<s.size();i++){
            vector<int>cnt(100,0);
            for(int j=i;j<s.size();j++){
               cnt[s[j]]++;
            //    cout<<totalcount(cnt)<<" ";
               if(totalcount(cnt)>k)
                {
                maxlen=max(maxlen,j-i);
                 break;
               }
               else
               maxlen=max(maxlen,j-i+1);
            }
        }
        return maxlen;
    }
};
