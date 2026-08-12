class Solution {
public:
    int characterReplacement(string s, int k) {
      unordered_map<int,int>cnt;
      int siz=s.size();
      int maxlen=0;
      int left=0, right=0;
      while(right<siz){
      cnt[s[right]]++;
      int length=right-left+1;
      int maxoccur=0;
      for(auto it:cnt){
         maxoccur=max(it.second,maxoccur);
      }
      if(length-maxoccur<=k){
        right++;
        maxlen=max(maxlen,right-left);
      }
      else
          {
            cnt[s[left]]--;
            left++;
            right++;
            }

            //cout<<maxlen<<" "<<left<<" "<<right<<" "<<maxoccur<<endl;
      }

      return maxlen;
    }
};
