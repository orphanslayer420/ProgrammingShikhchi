#include<stdio.h>
int main()
{
    /*
    int i=1,N;
    printf("Insert your desired quantity of lines? :");
    scanf("%d",&N);
    while(i<=N) //handles individual lines
    {
        int j=1;
        while(j<=i) // astriks in each lines
        {
        printf("*");
        j++;
        }
    printf("\n");
    i++;
    }
    */

    int N;
    printf("Insert your desired quantity of lines? :");
    scanf("%d",&N);

    for(int i=1;i<=N; i++) //handles individual lines
    {
        for(int j=1; j<=i ; j++) // astriks in each lines
        {
            printf("*");
        }
        printf("\n");
    }
}
