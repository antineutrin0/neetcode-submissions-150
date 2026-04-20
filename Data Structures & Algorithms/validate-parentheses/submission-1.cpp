class Solution {
public:
    bool isValid(string s) {
        stack<char>stk;
        if(s.size()%2)
        return false;
       for(int i=0;i<s.size();i++){
        if(s[i]=='['||s[i]=='{'||s[i]=='(')
         stk.push(s[i]);
         else
         {
            if(stk.empty())
            return false;
            char cr=stk.top();
            stk.pop();
            if(cr=='['&&s[i]!=']')
            return false;
           else if(cr=='{'&&s[i]!='}')
            return false;
           else if(cr=='('&&s[i]!=')')
            return false;
         }

       }

       if(!stk.empty())
       return false;
       else
       return true;
    }
};
