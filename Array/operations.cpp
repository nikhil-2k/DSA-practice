// using namespace std;
// #include<bits/stdc++.h>
// struct array
// {
//     int A[10];
//     int size;
//     int length;
// };
// int display(struct array arr)
// {
//    int i;
//    cout<<A[10];
//    for ( i = 0; i < arr; i++)
//    {
//        cout<<A[10];
//    }
   
// }
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int Get(struct Array arr,int index)
{
    if(index>=0 && index<arr.length)
    return arr.A[index];
    return 0;
}
 void Display(struct Array arr,int index)
 {
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
 }
 int main()
{
    int Get;
 struct Array arr1[]={{2,3,9,16,18,21,28,32,35},10,9};
//  printf("%d",Get(arr.2));
cout<<Get(arr1,2);
 return 0;
}
using namespace std;
#include<bits/stdc++.h>
i