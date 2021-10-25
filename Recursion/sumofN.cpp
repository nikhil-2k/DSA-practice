using namespace std;
#include<iostream>
int sum(int n)
{
    if (n==0)
    return 0;
    else
    {
       return n*(n+1)/2;
    }
}
int main()
{
    // int x;
    // x=sum(5);
    // cout<<sum(5);
    int x=10;
    cout<<sum(x);
    return 0;
}