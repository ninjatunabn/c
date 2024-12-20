#include <stdio.h>

int main(){
    unsigned char n;
    printf("Хэдэн ширхэг тоо оруулах вэ?\n");
    do 
        scanf("%u", &n);
    while( n >= 100);

    unsigned char a[n];
    printf("Та %u ширхэг тоог оруулна уу:\n", n);
    for(unsigned char i=0; i<n; i++){
        scanf("%u", &a[i]);
        printf("%u\n", a[i]);
    }
    printf("Гаралт:\n");
    for(unsigned char i=n; i>0; i--){
        printf("%u\n", a[i-1]);
    }
}