class Solution {
public:
 void generate(int open, int close, int n, vector<string>&res, string &str){
       if(open==close&& open==n){
        res.push_back(str);
        return ;
       }
      
      if(open<n)
      {
        str+='(';
        generate(open+1,close,n,res,str);
        str.pop_back();
      }
      if(close<open){
        str+=')';
        generate(open,close+1,n,res,str);
        str.pop_back();
      }

 }

public:
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        string str="";
        generate(0,0,n,res,str);
        return res;
    }
};
