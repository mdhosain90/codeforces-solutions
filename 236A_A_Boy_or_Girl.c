//https://codeforces.com/problemset/problem/236/A
#include<stdio.h>
#include<string.h>
 
int main()
{
    char name[106];
    scanf("%s",name);
 
    int len = strlen(name);
    int count = 0;
    
    for(int i = 0 ; i < len ; i++)
    {
        int found = 0;
        for(int j = 0; j<i ; j++)
        {
            if(name[i]==name[j])
            {
                found = 1;
                break;
            }
           
        }
         if(found == 0)
            {
                count++;
            }
    }
    if(count%2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
}
