#include<stdio.h>
int main()
{
    float A,B,C;
    double tri,c,tra,s,r;
    scanf("%f %f %f", &A,&B,&C);
    tri = .5 * A * C;
    c = 3.14159 * (C*C);
    tra = (A+B)/2 * C;
    s = B*B;
    r = A*B;
    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", c);
    printf("TRAPEZIO: %.3lf\n", tra);
    printf("QUADRADO: %.3lf\n", s);
    printf("RETANGULO: %.3lf\n", r);
    return 0;



}
