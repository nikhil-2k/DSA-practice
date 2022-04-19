#include <bits/stdc++.h>
using namespace std;
// bool isValidParenthesis(string expression)
// {
//     stack<char> s;
//     for (int i = 0; i < expression.length(); i++)
//     {
//         char ch = expression[i];
//         if (ch == '(' || ch == '{' || ch == '[')
//         {
//             s.push(ch);
//         }
//         else
//         {
//             if (!s.empty())
//             {
//                 char top = s.top();
//                 if ((ch == ')' && top == '(' || ch == '}' && top == '{' || ch == ']' && top == '['))
//                 {
//                     s.pop();
//                 }
//                 else
//                 {
//                     return false;
//                 }
//             }
//             else
//             {
//                 return false;
//             }
//         }
//     }
//     if (s.empty())
//         return true;
//     else
//         return false;
// }
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
         stack<char> st;
        for(int i=0;i<x.length();i++){
            if(x[i] == '(' || x[i] == '{' || x[i] == '[')
                st.push(x[i]);
            else if(st.empty()==true)
                return false;
            else if(x[i] == ')' && st.top() != '(')
                return false;
            else if(x[i] == '}' && st.top() != '{')
                return false;
            else if(x[i] == ']' && st.top() != '[')
                return false;
            else
                st.pop();
        }
        if(st.empty())
            return true;
        return false;
    }
};
