class KthLargest {
    priority_queue<int, vector<int>, greater<int>>minheap;
    int kth;
public:
    KthLargest(int k, vector<int>& nums) {
        kth=k;
        for(int i=0;i<nums.size();i++){
            
             minheap.push(nums[i]);
            if(minheap.size()>k)
            minheap.pop();
        }

    }
    
    int add(int val) {
            minheap.push(val);
            if(minheap.size()>kth)
            minheap.pop();
            return minheap.top();
        
    }
};
