#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;//vector is nothing but a dynamic array which uses template
    v.push_back(10);
    cout<<v.size()<<endl;
    cout<<v.at(0)<<endl;
    v.push_back(20);
    v.push_back(30);
    v.pop_back();
    cout<<v.at(1)<<endl;
    cout<<v.size();
}