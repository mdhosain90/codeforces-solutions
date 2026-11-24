//https://codeforces.com/problemset/problem/116/A
#include<stdio.h>
 
int main()
{
    int stops,a,b;
    scanf("%d",&stops);
    int total = 0;
    int longest = 0;
 
    for(int i = 0; i < stops; i++)
    {
 
        scanf("%d %d",&a,&b);
        total = (total - a) + (b);
        if(total >= longest)
        {
            longest = total;
        }
 
 
    }
    printf("%d",longest);
 
 
}
