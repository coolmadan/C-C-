/*#include<iostream>
#include<string.h>
using namespace std;
// Change in the given string itself. So no need to return or print the changed string.

//void pairStar(char input[]) {
    // Write your code here
 // #include<string.h>
void pairStar(char input[]) {
    // Write your code here
    if(strlen(input)==1)
        return;
    pairStar(input+1);
    if(input[0]==input[1])
    {
        int i=strlen(input);
        while(i>=1)
        {
            input[i+1]=input[i];
            i--;
        }
        input[i+1]='*';
    }

}



int main()
{
    char input[50];
    cin.getline(input,50);
    pairStar(input);
    cout<<input<<endl;
}*/
#include<iostream>
#include<string.h>
using namespace std;
void pairstar(char input[])
{
    if(strlen(input)==0|| strlen(input)==1)
        return ;
    pairstar(input+1);
    if(input[0]==input[1])
    {
        int i=strlen(input);
        for(;i>=1;i--)
        {
            input[i+1]=input[i];
        }
        input[i+1]='*';
    }
}
int main()
{
    char input[50];
    cin.getline(input,50);
    pairstar(input);
    cout<<input<<endl;
}