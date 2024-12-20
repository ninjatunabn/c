#include <stdio.h>
#include <math.h>

int a,b,c,d;
float q,w,e,r;
main(){
    scanf("%d %d %d %d", &a, &b, &c, &d);
    q=((b/c)+(a*a*a))*((b/c)+(a*a*a));
    w=sqrt(q);
    e=(d*d)-((a*b)/c);
    r=(w*d)/e;
    printf("hariu=%0.2f", r);
}