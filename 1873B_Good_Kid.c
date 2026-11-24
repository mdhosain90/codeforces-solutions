#include<stdio.h>
#include<stdbool.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n;
        scanf("%d",&n);

        int a[n+5];
        int total = 1;
        bool flag = false;
        for(int i = 0; i < n ; i++)
        {
            scanf("%d",&a[i]);
            
        }

        int lowest = a[0];
        for(int i = 0 ; i < n ; i++)
        {
            if(a[i] <= lowest)
            {
                lowest = a[i];
            }
        }
        for(int i = 0; i < n ; i++)
        {
            if(a[i] != lowest)
            {
                total = total * a[i];
            }
            else
            {   
                if(!flag)
                {
                    total = total * (a[i] + 1);
                    flag = true;
                }
                else
                {
                    total = total * a[i];
                }
                
            }
        }
        printf("%d\n",total);
    }
}