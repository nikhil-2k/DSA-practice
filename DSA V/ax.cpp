#include <bits/stdc++.h>
using namespace std;
// int findNumberOfOperation(int n)
// {
//     int count = 0;
//     while (n > 0)
//     {
//         n = n / 10;
//         // n = (n * 10) + n1;
//     }
//     // if((n>INT_MAX/10) || (n< INT_MIN/10))
//     // {
//     //    return count;
//     // }
//     // int calculate (int n)
//     count++;
// }

int findLastDigit(int n){
    int k = n;
    while(k > 10)
        k = k / 10;
    return k;
}

int findNumberOfOperations(int n){
    int count = 1, k = n;
    while(k > 0){
        count++;
        k = k - findLastDigit(k);
    }
    return count;
}

int main()
{
    int n = 21;
    int answer = findNumberOfOperations(21);
    cout << answer;
}
