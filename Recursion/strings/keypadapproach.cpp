#include<iostream>
using namespace std;
int keypad(int num,string output[])
{
    string arr[8];
}
int main()
{
    int num;
    cin>>num;
    string *output=new string[1000];
    int count=keypad(num,output);
    for(int i=0;i<count;i++)
    {
        cout<<output[i]<<endl;
    }
}