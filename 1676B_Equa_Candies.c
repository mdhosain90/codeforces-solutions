//https://codeforces.com/problemset/problem/1676/B
#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n+5];
        for(int i = 0 ; i < n ; i++)
        {
            scanf("%d",& a[i]);
        }

        int lowest = a[0];
        for(int i = 0; i<n;i++)
        {
            if(lowest > a[i])
            {
                lowest = a[i];
            }
        }

        int eat = 0 ;
        for(int i = 0 ; i <n ; i++)
        {
            if(a[i] > lowest)
            {
                eat = eat + (a[i] - lowest);
            }
        }
        printf("%d\n",eat);
    }
    
}