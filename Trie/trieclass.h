#include"TrieNodeclass.h"
class Trie
{
    TrieNode*root;
    private:
    void insertWordhelper(TrieNode* root,string word)
    {
        //Base Condition :
        if(word.size()==0)
        {
            root->isTerminal=true;
            return;
        }
        //Small Calculation
        int index=word[0]-'a';
        TrieNode*child=NULL;
        if(root->children[index]!=NULL)
        {
            child=root->children[index];
        }else{
            child=new TrieNode(word[0]);
            root->children[index]=child;
        }
        //Recursive Call
        insertWordhelper(child,word.substr(1));
    }
    bool searchhelper(TrieNode *root,string word)
    {
        //Base Condition
        if(word.size()==0)
        {
            return root->isTerminal;
        }
        //Small Calculation;
        int index=word[0]-'a';
        TrieNode*child=root->children[index];
        if(child==NULL)
        return false;

        return searchhelper(child,word.substr(1));   
        
      //  return root->isTerminal;
        
    }
    void remove(TrieNode* root, string word)
    {
        //Base Condition
        if(word.size()==0)
        {
            root->isTerminal=false;
            return;
        }
        //Small Calculation
        int childIndex=word[0]-'a';
        TrieNode *child=root->children[childIndex];
        if(child==NULL)
        return;

        remove(child,word.substr(1));
        //Check if child node is useless or not if all it is useless i.e all of its children are null then deallocate the child node
        if(child->isTerminal==false)
        {
            for(int i=0;i<26;i++)
            {
                if(child->children[i]!=NULL)
                return;
            }
            delete child;
            root->children[childIndex]=NULL;
        }
    }
    public:
    Trie()
    {
        root = new TrieNode('\0');
    }
    void insertWord(string word)
    {
        insertWordhelper(root,word);
    }
    
    bool search(string word)
    {
        return searchhelper(root,word);
    }
     void  remove(string word)
    {
        remove(root,word);
    }
};