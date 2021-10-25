using namespace std;
#include<iostream>
double e(int x,int n)
{
    static double p=1,f=1;
    double r;
    if (n==0)
    return 1;
    else
    {
      r=e(x,n-1);
      p=p*x;
      f=f*n;
      return r+p/f;
    }
}
int main()
{
    int x=1;
    int n=15;
    cout<<e(x,n-1);
    return 0;
}