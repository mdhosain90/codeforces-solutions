//https://codeforces.com/problemset/problem/977/A
#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n , &k);
    int digit = n;
 
    while(k--)
    {
        if(digit%10 != 0)
        {
            digit--;
        }
        else
        {
            digit = digit / 10;
        }
    }
    printf("%d",digit);
}