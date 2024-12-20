#include <stdio.h>
 
int main(){
    int x;
    int *p;
    p = &x;
    printf("%d\n", *p);
    *p = 3;
    printf("%d\n", x);
    return 0;
}