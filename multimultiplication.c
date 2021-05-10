#include<stdio.h>
int main()
{
    for(int i=1;i<=12;i++)
    {
        int X,gunfol;
        //scanf("%d",&X);
        for(int j=1;j<=10;j++)
        {
            gunfol=i*j;
            printf("%d x %d = %d\n",i,j,gunfol);

        }
        printf("\n");
    }
}
