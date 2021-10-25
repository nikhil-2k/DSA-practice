#include<bits/stdc++.h>
using namespace std;

class Array
{
    private:
    int *A;
    int i;
    int x;
    int size;
    int length;
    public:
    Array()
    {
        size=10;
        A=new int [10];
        length=0;
    }
    // constructor
    Array(int sz)
    {
        size = sz;
        length=0;
        A=new int [size];
    }
    // Distructor
    ~Array()
    {
        delete[]A;
    }
    void Display();
    void Insert (int index,int x);
    int Delete (int index);
};

void Array :: Display()
{
    for (int i=0;i<length;i++)
    cout<<A[i]<<" "<<endl;
}

void Array :: Insert (int index, int x)
{
 if(index>=0 && index<=length)
 {
     for (int i=length-1;i>=index;i--);
     A[i]=A[i+1];
     A[index]=x;
     length++; 
 }
}
int Array :: Delete(int index)
{
    if (index>=0 && index<length)
    {
       x=A[index];
       for (i=index;i<length-1;i++);
       A[i]=A[i+1];
       length--; 
    }
    return 0;
}
int main()
{
    Array arr (10);
    arr.Insert(0,5);
    arr.Insert(1,6);
    arr.Insert(2,9);
    arr.Display();
    cout<<arr.Delete(0)<<endl;
    arr.Display();
    return 0;
}