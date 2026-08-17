class Solution {
public:

    bool isPossible(int mid, vector<int>&piles, int h){
    for(int i=0;i<piles.size();i++){
        int hr=ceil(piles[i]*1.0/mid);
        h-=hr;
        if(h<0)
        return false;
    }
    return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {

        int low=1;
        int high=INT_MAX;
        int mid;
        while(low<high){
             mid=low+(high-low)/2;
            if(isPossible(mid,piles,h)){
                  high=mid;
            }
            else
            low=mid+1;
        }
        return high;
        
    }
};
