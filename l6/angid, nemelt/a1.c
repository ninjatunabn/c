#include <stdio.h>

int main(){
    unsigned char a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int i = 0; i<=9; i++){
        printf("%u\n", a[i]);
    }
    return 0;
}