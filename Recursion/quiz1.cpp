using namespace std;
#include<iostream>
int fun(int n)
{
    static int i=1;
    if (n>=5)
    return n;
    n=n+i;
    return fun(n);
}
int main()
{
    int x=1;
    cout<<fun(x);
    return 0;
}