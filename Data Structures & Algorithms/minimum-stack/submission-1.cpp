class MinStack {
public:
   stack<long>minStack;
    MinStack() {
    }
    
    void push(int val) {
        minStack.push(val);
    }
    
    void pop() {
          if(!minStack.empty())
          minStack.pop();
    }
    
    int top() {
          int val=minStack.top();
          return val;
    }
    
    int getMin() {
        int minn =minStack.top();
        stack<long>tmp;
        while(!minStack.empty())
        {   
            int top=minStack.top();
            minStack.pop();
            tmp.push(top);
            if(top<minn)
            minn=top;
        }
        while(!tmp.empty()){
            minStack.push(tmp.top());
            tmp.pop();
        }
        return minn;
    }

};
