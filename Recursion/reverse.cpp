#include<bits/stdc++.h>
using namespace std;
  int main(){
      int left;
      cin>>left;
      int right;
      cin>>right;
      int m=equal(left,right) ;
      cout<<m<<endl;
      return 0;
  }
  int equal(int left,int right){
      int count=0;
      for(int i=left;i<=right;i++){
          int arr[10]={0};
          while(i>0){
              int m=i%10;
              arr[m]++;
              i=i/10;
          }
          for(int j=0;j<10;j++){
              if (arr[j]>1)
                 break;
              else if(arr[j]==1 && j==9){
                  count++;
              }   
          }
      }
      return count;
  }