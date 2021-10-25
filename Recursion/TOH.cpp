using namespace std;
#include <iostream>
#include <stdio.h>
void TOH(int n, int a, int b, int c)
{
    if (n > 0)
    {
        TOH(n - 1, a,c,b);
        cout << a<<"," << c<< endl;
        // printf("(%d,%d)\n", a, c);
        TOH(n - 1, b, a, c);
    }
}
int main()
{
    int n=2;
    int a=1;
    int b=2;
    int c=3;
    TOH(n, a, b, c);
    return 0;
}
