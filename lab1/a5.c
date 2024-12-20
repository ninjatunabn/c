#include <stdio.h>
int main() {
    int a,b;
    int s,r,p,di;
    float div;
    printf("a, b toog oruulna uu:");
    scanf("%d %d", &a, &b );
    s = a + b;
    r = a - b;
    p = a * b;
    di = a / b;
    div = a % b;
    printf("sum = %d\nylgavar = %d\nproduct = %d\nnogdvor = %d\nbutarhait = %.2f", s,r,p,di,div);
    return 0;
}