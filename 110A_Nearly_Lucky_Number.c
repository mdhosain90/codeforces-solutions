//https://codeforces.com/problemset/problem/110/A
#include<stdio.h>
int main()
{
    long long  n,value;
    scanf("%lld",&n);
    value = n;
    int count = 0;
 
    while(value > 0){
        int digit = value % 10;
        if(digit == 4 || digit == 7){
            count++;
        }
        value = value / 10;
    }
 
    if(count == 4 || count == 7){
        printf("YES");
    }
    else{
        printf("NO");
    }
}