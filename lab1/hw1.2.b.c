#include <stdio.h>
#include <math.h>

int a,b;
float alpha, radian;
float q,w,e,c;
main(){
    scanf("%f %f %f", &a, &b, &alpha);
    radian=alpha*(3.14/180);
    q=(b*b)+(a*a);
    w=2*a*b*(cos(radian));
    e=q-w;
    c=sqrt(e);
    printf("c=%0.2f", c);
}