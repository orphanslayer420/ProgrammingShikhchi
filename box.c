#include<stdio.h>
int main()
{
   int N;
   printf("Enter How Many Rows You Want :");
   scanf("%d",&N);
   for(int i=1;i<=N;i++)
   {
       for(int j=1;j<=N;j++)
       {
           printf("*");
       }

       printf("\n");
   }

}
