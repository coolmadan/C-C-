//Given is the code to print numbers from 1 to n in increasing order recursively. But it contains few bugs that you need to rectify such that all the test cases pass.
#include<iostream>
using namespace std;
void digits(int n)//no returning approach
{
    /*if(n!=0)
    {
        digits(n-1);
        cout<<n<<" ";
    }*/
    if(n==1)
        {cout<<n<<" ";
        return ;
        }
        digits(n-1);
        cout<<n<<" ";


}
// try and write a int function for  returning approach also
int main()
{
    int n;
    cin>>n;
    digits(n);
}