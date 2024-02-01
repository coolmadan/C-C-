/*#include<iostream>
#include<string.h>
using namespace std;
void replacePi(char input[])
{
    if(input[0]=='\0')
    return ;
    replacePi(input+1);
    if(input[0]=='p'&&input[1]=='i')
    { int i=strlen(input);
       while(i>=2)
       {
           input[i+2]=input[i];
       }
        input[0]='3';
            input[1]='.';
            input[2]='1';
            input[3]='4';
            replacePi(input+4);
    }

}
 int main()
 {
     char input[10000];
     cin.getline(input,10000);
     replacePi(input);
     cout<<input<<endl;
 }
 #include <iostream>
using namespace std;

#include<string.h>
void replacePi(char input[]) {
   if(input[0]=='\0')
       return;
    
   replacePi(input+1);
    if(input[0]=='p'&&input[1]=='i')
    {
        int l=strlen(input);
        int i=l;
        while(i>=2)
        {
            input[i+2]=input[i];
            i--;
        }
        input[0]='3';
        input[1]='.';
        input[2]='1';
        input[3]='4';
        //replacePi(input+4);
    }
}*/
#include<iostream>
#include<string.h>
using namespace std;
void replacePi(char input[],int start)
{
    if(input[start]=='\0'||input[start+1]=='\0')
        return;
    if(input[start]=='p'&&input[start+1]=='i')
    {
        int len=strlen(input);
        int i=len;
        input[i+2]='\0';
        for(int i=len-1;i>=start+2;i--)
        {
            input[i+2]=input[i];
        }
        input[start]='3';
        input[start+1]='.';
        input[start+2]='1';
        input[start+3]='4';
    }
    replacePi(input,start+1);
}
void replacePi(char input[])
{
    replacePi(input,0);
}

        
    

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout<< input << endl;
}