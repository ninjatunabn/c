#include <stdio.h>
#include <math.h>

struct Triangle
{
    int a, b, c;
};

double find_area(struct Triangle g);

int main(){
    struct Triangle g1, g2;
    printf("1st triangle sides: ");
    scanf("%d %d %d", &g1.a, &g1.b, &g1.c);
    printf("2nc triangle sides: ");
    scanf("%d %d %d", &g2.a, &g2.b, &g2.c);
    double neg = find_area(g1);
    double hoyr = find_area(g2);

    if(neg < hoyr)
        printf("bigger one is: hoyr dahi gurvaljin  %.2f \n", hoyr);
    else if(neg > hoyr)
        printf("bigger one is: ehnii gurvaljin %.2f \n", neg);
    else
        printf("same size");
    return 0;
}

double find_area(struct Triangle g){
    double p = (g.a + g.b + g.c) / 2.0;
    return sqrt(p * (p - g.a) * (p - g.b) * (p - g.c));
}