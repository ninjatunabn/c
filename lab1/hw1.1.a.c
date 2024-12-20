// b,h ni gurvaljnii suuri bol talbaig ol

#include <stdio.h>
int main() {
    int b, h;
    float s;
    scanf("%d %d", &b, &h );
    s = 0.5 * b * h;
    printf("Гурвалжны суурь: %d \nГурвалжны өндөр: %d \nГурвалжны талбай: %0.2f", b,h,s );
    return 0;
}