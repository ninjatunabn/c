#include <stdio.h>
#include <math.h>

int a,b,c;

int main(){
    scanf("%d %d", &a,&b);
    c=(a > b) * a + (a <= b) * b;

    c && printf("baga too ni:%d\nih too ni:%d", b,a);
    return 0;
}