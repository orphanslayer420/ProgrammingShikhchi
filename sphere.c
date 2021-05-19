#include<stdio.h>
#include<math.h>
int main()
{
    float R,x;
    double VOLUME;
    scanf("%f",&R);
    VOLUME = (4/3.0)*3.14159*(x=pow(R,3));
    printf("VOLUME = %.3lf \n", VOLUME);
    return 0;

}
