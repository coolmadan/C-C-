#include<iostream>
#include<math.h>
using namespace std;
int subsequence(string input,string output[])
{
    if(input.empty())
    {
        output[0]="";
        return 1;
    }
        string substring=input.substr(1);
        int smalloutputsize=subsequence(substring,output);
        for(int i=0;i<smalloutputsize;i++)
        {
            output[i+smalloutputsize]=input[0]+output[i];
        }
        return 2*smalloutputsize;
    
}
int main()
{
    string input;
    cin>>input;
    int n=input.size();
    int num=pow(2,n);
    string *output=new string[num];
    int count=subsequence(input,output);
    for(int i=0;i<count;i++)
    {
        cout<<output[i]<<endl;
    }
}