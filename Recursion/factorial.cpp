using namespace std;
#include<iostream>
int fact(int n)
{
    if (n==0)
    return 1;
    else
    {
       return fact(n-1)*n;
    }
}
int main()
{
    // int x;
    // x=fact(10);
    // cout<<x;
    int x=10;
    cout<<fact(x)<<endl;
}