#include<stdio.h>
void main(){
    char a = 'A';
    char b = 'B';
    int c = a+b %3-3*2;
    printf("%d", c);
}