#include<iostream>
using namespace std;
/*int all_Indexes(int input[],int size,int x,int output[])
{
    if(size==0)
        return 0;
    int ans=all_Indexes(input+1,size-1,x,output);
    for(int i=ans-1;i>=0;i--)
    {
        output[i]=output[i]+1;
    }
    if(input[0]==x)
    {
        for(int i=ans-1;i>=0;i--)
        {
            output[i+1]=output[i];
        }
        output[0]=0;
        ans++;
    }
    return ans;
}*/
int allIndexes(int input[], int size, int x, int output[]) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Save all the indexes in the output array passed and return the size of output array.
     Taking input and printing output is handled automatically.
  */
    if(size==0)
        return 0;
	int ans=allIndexes(input+1,size-1,x,output);
    for(int i=ans-1;i>=0;i--)
    {
        output[i]=output[i]+1;
    }
    if(input[0]==x)
    {
        for(int i=ans-1;i>=0;i--)
        {
            output[i+1]=output[i];
        }
        output[0]=0;
        ans++;
    }
    return ans;
}
int main()
{   int output[]={};
    int input[]={9,8,10,8,8};
    
    int output_size=allIndexes(input,5,8,output);
    for(int i=0;i<output_size;i++)
    {
        cout<<output[i];
    }
}