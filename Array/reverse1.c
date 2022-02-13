#include<stdio.h>
void main(){
    int size;
    printf("enter size of array");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements : ");
    for(int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    
    // int arr1[size];
    printf("Reversed arr : ");
    for(int i = size - 1; i >= 0; i--)
        printf("%d ", arr[i]);
}