#include <stdio.h>
#include <math.h>

int n;
int r=0;
int neg;
float hoyr;
float gurav;
float duruv;

int main(){
    scanf("%d", &n);
    neg = n/1000;
    hoyr = (n/100)%10;
    gurav = (n/10)%10;
    duruv = n%10;
    // printf("i=%d\nii=%.0f\niii=%.0f\niv=%.0f\n", neg, hoyr, gurav, duruv);
    (neg - duruv == 0) && r++;
    (hoyr - gurav == 0) && r++;
    r==2 && printf("1");
    r<2 && printf("0");
}