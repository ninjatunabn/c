#include <stdio.h>
#include <math.h>

int a,b,c;
int d;
int e1,e2,e3;
int f1,f2,f3;
int g1,g2,g3;
int h1,h2,h3;

main(){
    scanf("%d %d %d", &a, &b, &c);  
//zuv
    e1=a==b;
    e2=a==c;
    e3=b==c;
    e1 && e2 && e3 && printf("zuv gurvaljin");
//eldev
    e1=a!=b;
    e2=a!=c;
    e3=b!=c;
    e1 && e2 && e3 && printf("eldev gurvaljin");

//adil
    f1 = (a > b ) * a + (a <= b) * b;
    h1 = (f1>b);   //a>b
    g1 = a==c;

    f2 = (a > c ) * a + (a <= c) * c;
    h2 = (f2>c);   //a>c
    g2 = a==b;   

    f3 = (b > a ) * b + (b <= a) * a;
    h3 = (f3>a);   //b>a
    g3 = b==c; 

    f1 && g1 && h1 && printf("adil hajuut");
    f2 && g2 && h2 && printf("adil hajuut");
    f3 && g3 && h3 && printf("adil hajuut");
    return 0;
}