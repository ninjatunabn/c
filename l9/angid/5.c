#include <stdio.h>

int power(int a, int b);

int main(){
    int b, a;
    scanf("%d%d", &a, &b);
    printf("%d\n", power(a, b));
    scanf("%d%d", &a, &b);
    printf("%d\n", power(a, b));
    return 0;
}

int power(int a, int b){
    int t = 1, i;
    for(i = 1; i <= b; i++)
        t *= a;
    return t;
}