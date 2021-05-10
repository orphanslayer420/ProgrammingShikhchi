#include<stdio.h>
int main()
{ int i=0,N;
  float X=1;
  scanf("%d", &N);
  while(i < N)
{ float result;

  scanf("%f",&result);
  X = X * result;
  i++;
}
  printf("The product of your previous inputs are : %.2f .", X);

}
