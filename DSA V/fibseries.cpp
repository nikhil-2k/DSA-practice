#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"N is : ";
    cin>>n;
    int a = 0;
    int b = 1;
    int NUM;
    cout<<a<<endl<<b<<endl;
    for (int i = 1;i<=n;i++)
    {
     NUM = a+b;
    cout << NUM<<endl;;
    a = b;
    b = NUM;
    }
    return 0;
}