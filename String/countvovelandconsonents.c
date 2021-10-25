#include<stdio.h>
// using namespace std;
// #include <bits/stdc++.h>
int main()
{
    char A[] = "How are you";
    int i, vcount = 0, ccount = 0;
    for (i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == 'A' || A[i] == 'a' || A[i] == 'E' || A[i] == 'e' || A[i] == 'I' || A[i] == 'i' || A[i] == 'O' || A[i] == 'o' || A[i] == 'U' || A[i] == 'u')
            vcount++;
        else ccount++;
    }
    printf("%d || %d\n",vcount, ccount);
    // cout << "voule count" << vcount << endl;
    // cout << "Consonent count" << ccount << endl;
    return 0;
}