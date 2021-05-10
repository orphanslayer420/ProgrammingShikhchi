#include<stdio.h>
int main()
{
    int x,N,large=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&x);
        if(x>large)
        large=x;


    }

    printf("%d",large);




}
