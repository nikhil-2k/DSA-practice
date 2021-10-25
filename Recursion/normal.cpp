using namespace std;
#include <iostream>
#include <stdio.h>
int fun(int n)
{
    if (n > 0)
    {
     return fun(n - 1)+n;
    }
    return 0;
}
int main()
{
    int a;
    a=fun(5);
    // fun(a);
    // cout << a << endl;
    printf("%d",a);
    return 0;
}

