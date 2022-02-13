using namespace std;
#include<bits/stdc++.h>
int main()
{
    stack<int>stack;
    stack.push(2);
    stack.push(3);

    stack.pop();
    cout<<"Print top element : "<<stack.top()<<"\n";
    if(stack.empty())
    {
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    cout<<"Size of stack is : "<<stack.size()<<endl;
    
}