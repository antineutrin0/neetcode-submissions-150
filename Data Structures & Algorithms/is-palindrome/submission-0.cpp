class Solution {
public:
    bool isPalindrome(string s) {
        string newstr="";
        for(int i=0;i<s.size();i++){
            int chr=s[i];
            if(chr>=48&&chr<=57)
            newstr+=s[i];
            if(chr>=65&&chr<=90)
            newstr+=tolower(s[i]);
            if(chr>=97&&chr<=122)
            newstr+=s[i];
        }
        string sprime=newstr;
        cout<<newstr;
        reverse(sprime.begin(),sprime.end());
        if(newstr==sprime)
        return true;
        else
        return false;
    }
};
