#include <stdio.h>

int main() {
    int N, s=0; 
    int b;
    scanf("%d", &N);
    do{
        b = N % 10;     //last bit          1234%10=4
        s += b;                             //4+3+2+1
        N /= 10;         //last bitiig ustgah    n=123
    } while (N != 0);
    printf("%d", s);
    return 0;
}
