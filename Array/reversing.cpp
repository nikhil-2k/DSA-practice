using namespace std;
#include<bits/stdc++.h>
struct Array
{
    int A[5];
    int size;
    int length;

};
void display (struct Array arr)
{
  int i;
  int n;
  cin>>n;
  for ( i = 0; i <arr.length; i++)
  cout<<arr.A[i];
}
void swap(int *x,int *y)
  {
      int temp=*x;
      *x=*y;
      *y=temp;
  }
  void reverse(struct Array *arr)
  {
      int *B;
      int i,j;
      B=new int[5];
      for (i=arr->length-1,j=0;i>=0;i--,j++)
      B[j]=arr->A[i];
      for(i=0;i<arr->length;i++)
      arr->A[i]=B[i];
      
  }
int main()
{
    struct Array arr={{2,4,6,8,10},5,5};
    reverse(&arr);
    display(arr);
    return 0;
}
