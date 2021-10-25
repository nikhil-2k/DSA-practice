using namespace std;
#include<bits/stdc++.h>
int main()
{
    int *p,*q;
    int i;
     p=new int[5];
     q=new int[10];
     for(i=0;i<5;i++)
     q[i]=p[i];

    for(i=0;i<5;i++)
    cout<<p[i]<<endl;
    return 0;
}