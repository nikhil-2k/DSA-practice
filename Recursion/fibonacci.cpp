using namespace  std;
#include<iostream>
int fib(int n)
{
    if (n==0)
    return 0;
    else if (n==1)
    return 1;
    else
    return fib(n-2)+fib(n-1);
}
int main()
{
    int x=10;
    cout<<fib(x);
    return 0;
}