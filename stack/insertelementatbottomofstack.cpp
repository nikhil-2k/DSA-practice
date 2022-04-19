#include <bits/stdc++.h>
using namespace std;
void solve(stack<int> s, int x)
{
    //Base-case
    if (s.empty())
    {
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();
    //Recursive call
    solve(s, x);
    s.push(num);
}
stack<int> pushAtBottom(stack<int> &mystack, int x)
{
    solve(mystack, x);
    return mystack;
}
