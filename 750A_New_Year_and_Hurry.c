//https://codeforces.com/problemset/problem/750/A
#include<stdio.h>
 
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
 
    int total_time = 240 - k;
    int problem_sloved = 0;
    int time = 0;
    //time is 18;
    if(total_time <= 0 )
    {
        printf("%d",problem_sloved);
    }
    else{
        for(int i = 1 ; i <= n; i++)
    {
        time = time + 5*i;
        if( time > total_time){
            break;
        }
        else{
            problem_sloved++;
        }
    }
    printf("%d",problem_sloved);
    }
    
}