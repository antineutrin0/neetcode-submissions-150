struct Trie{
    Trie* children[26];
    bool endNode;
    Trie(){
        for(int i=0;i<26;i++){
            children[i]=nullptr;
        }
        endNode=false;
    }

};

class PrefixTree {
    Trie* root;
public:
    PrefixTree() {
        root=new Trie();
    }
    
    void insert(string word) {
        Trie* curr=root;
        for(auto c:word){
            int i=c-'a';
            if(curr->children[i]==nullptr)
            curr->children[i]=new Trie();

            curr=curr->children[i];
        }
        curr->endNode=true;
    }
    
    bool search(string word) {

        Trie* curr=root;

        for(auto c:word){
            int i=c-'a';
            if(curr->children[i]==nullptr)
            return false;
           curr=curr->children[i];
         }
        if(curr->endNode)
        return true;
        else
        return false;
        
    }
    
    bool startsWith(string prefix) {

         Trie* curr=root;

        for(auto c:prefix){
            int i=c-'a';
            if(curr->children[i]==nullptr)
            return false;
           curr=curr->children[i];
         }
        return true;
        
    }
};
