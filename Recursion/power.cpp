using namespace std;
#include<iostream>
int pow(int m,int n)
{
    if (n==0)
    return 1;
    else
    {
       return pow(m,n-1)*m;
    }
}
int main()
{
    int m=2;
    int n=5;
    cout<<pow(m,n-1)*m;
    return 0;
}