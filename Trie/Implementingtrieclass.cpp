#include"trieclass.h"
int main()
{
    Trie obj;
    obj.insertWord("and");
    obj.insertWord("ant");
    obj.insertWord("algorithm");
    cout<<obj.search("and")<<endl;
    cout<<obj.search("arth")<<endl;
    obj.remove("and");
    cout<<obj.search("and")<<endl;
}