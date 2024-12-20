#include <stdio.h>
#include <math.h>

struct Triangle
{
    int a, b, c;
};

int main(){
    struct Triangle g1, g2;
    printf("1st triangle sides: ");
    scanf("%d %d %d", &g1.a, &g1.b, &g1.c);
    printf("2nc triangle sides: ");
    scanf("%d %d %d", &g2.a, &g2.b, &g2.c);

    double p1 = (g1.a + g1.b + g1.c) / 2.0;
    double p2 = (g2.a + g2.b + g2.c) / 2.0;
    double s1 = sqrt(p1 * (p1 - g1.a) * (p1 - g1.b) * (p1 - g1.c));
    double s2 = sqrt(p2 * (p2 - g2.a) * (p2 - g2.b) * (p2 - g2.c));

    if(s1 < s2)
        printf("bigger one is: hoyr dahi gurvaljin  %.2f \n", s2);
    else if(s1 > s2)
        printf("bigger one is: ehnii gurvaljin %.2f \n", s1);
    else
        printf("same size");
    return 0;
}