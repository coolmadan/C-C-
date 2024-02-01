//Given a string, compute recursively a new string where all 'x' chars have been removed.
#include<iostream>
#include<string.h>
using namespace std;
void removex(char input[])
{
    if(input[0]=='\0')//base case
        return;
        removex(input+1);
    if(input[0]=='x')
    {   int i=1;
        for(;input[i]!='\0';i++)
        {
            input[i-1]=input[i];
        }                       //loop from 1 till it does not reach null charachter it swap the value at i-1 index with i index
        input[i-1]=input[i];//places null charachter at the end of the string if this is not written it will print the last charachter at the end of the string till the loop reaches \0
        removex(input);
    }
}
int main()
{
    char input[100];
    cin.getline(input,100);
    removex(input);
    cout<<input<<endl;
    return 0;
}