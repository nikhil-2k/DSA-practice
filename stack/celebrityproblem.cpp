#include <bits/stdc++.h>
using namespace std;
class solution
{
    int celebrity(vector<vector<int>> m, int n)
    {
        stack<int> s;
        for (int i = 0; i < n; i++)
        {
            s.push(n);
        }
        while (s.size() > 1)
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            if (knows(a, b))
            {
                s.push(b);
            }
            else
            {
                s.push(a);
            }
        }
        int candidate = s.top();
        bool rowCheck = false;
        int zeroCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (m[candidate][i] == 0)
                zeroCount++
        }
        if (zeroCount == n)
        {
            rowCheck = true;
        }
        bool colCheck = false;
        int colCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (m[i][candidate] == 1)
                oneCount++;
        }
        if (oneCount == n - 1)
        {
            colCheck = true;
        }
        if (rowCheck == true && colCheck == true)
            return candidate;
    }
    else
    {
        return -1;
    }
}
}
;