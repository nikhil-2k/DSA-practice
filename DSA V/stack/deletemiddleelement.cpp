#include <bits/stdc++.h>
using namespace std;
void solve(stack<int> input_stack, int count, int size)
{
    if (count == size / 2)
    {
        input_stack.pop();
        return;
    }
    int num = input_stack.top();
    input_stack.pop();
    // RECURSIVE CALL
    solve(input_stack, count + 1, size);
    input_stack.push(num);
}
void deleteMiddle(stack<int> input_stack, int n)
{
    int count = 0;
    solve(input_stack, count, n);
}
