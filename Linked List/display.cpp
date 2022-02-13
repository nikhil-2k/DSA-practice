#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
int main()
{
    int A[] = {3,5,7,10,15};
    Node* head = new Node;
    Node*temp;
    Node*last;

    head->data = A[0];
    head->next = NULL;
    last = head;

    for(int i =1;i<sizeof(A)/sizeof(A[0]);i++)
    {
        temp = new Node;
        temp->data=A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
    Node*p = head;
    while(p!=NULL)
    {
        cout<<p->data<<" -> ";
        p= p->next;
    }
    return 0;

}
