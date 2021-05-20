#include<stdio.h>
int main()
{
    int amount;
    scanf("%d", &amount);
    printf("%d\n",amount);
    int note[7]={100,50,20,10,5,2,1};
    for(int i=0;i<7;i++)
    {
        printf("%d nota(s) de R$ %d,00\n",amount/note[i],note[i]);
        amount = amount%note[i];

    }

    return 0;

}
