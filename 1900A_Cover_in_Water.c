//https://codeforces.com/problemset/problem/1900/A
#include<stdio.h>
 
int main()
{
    int t;
    scanf("%d",&t);
 
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char a[n+5];
        int action = 0, cheak = 0;
        for(int i = 0; i < n ; i++)
        {
            scanf(" %c",&a[i]);
        }
 
        for(int i = 0 ; i < n ; i++)
        {
           if(a[i] == '.')
           {
            action++;
            if(i+2<n && a[i+1] == '.' && a[i+2] == '.')
            {
                cheak = 1;
            }
           }
        }
        if(cheak == 1)
        {
            printf("%d\n",2);
        }
        else
        {
            printf("%d\n",action);
        }
    }
}