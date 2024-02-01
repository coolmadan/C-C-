/*suppose you are given 156 then you have to print 3 using recursion
//try to write a returning approach as well as a non returning approach*/
#include<iostream>
using namespace std;
int count(int n)
{
    if(n==0)
    return 0;
    int smalloutput=count(n/10);
    return smalloutput+1;
}
/*int count(int n)
{
    if(n<10)
    {
        return 1;
    }
    return 1+count(n/10);
    */
   //time complexxity :     O(log(n))
   //space complexity :     O(log(n))
    // where n is the number
int main()
{
    int n;
    cin>>n;
    cout<<count(n);

}