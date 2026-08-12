class MinStack {
public:
   stack<int>stk;
   stack<long>minStack;
    MinStack() {

    }
    
    void push(int val) {
        minStack.push(val);
        if(stk.empty())
         stk.push(val);
         else
         {
            int top=stk.top();
            if(top>=val)
             stk.push(val);
         }
    }
    
    void pop() {
          if(!minStack.empty())
          {
            int val=minStack.top();
            if(val==stk.top())
            {
                stk.pop();
            }
            minStack.pop();
            }

    }
    
    int top() {
          int val=minStack.top();
          return val;
    }
    
    int getMin() {
      return stk.top();
    }

};
