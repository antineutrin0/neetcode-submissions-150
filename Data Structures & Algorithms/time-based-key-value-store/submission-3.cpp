class TimeMap {
    public:
    map<string,vector<pair<int,string>>>bucket;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        bucket[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {

     if(bucket.find(key) == bucket.end())
            return "";
       int low=0;
       auto &it=bucket[key];
       int high=it.size()-1;
       int mid;
       while(low<=high){
          mid=low+(high-low)/2;

          if(it[mid].first<=timestamp)
            low=mid+1;
            else
            high=mid-1;
       }
       if(high==-1)
       return "";
     return it[high].second;
    }
};
