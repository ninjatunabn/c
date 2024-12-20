// a,b,c ni kvadrat tegshitgeliin coeff bol x1,x2-iig ol.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a, b, c;
float q, w, d, s, x1, x2;

int main() {
    
    printf("a, b, c: ");
    scanf("%d %d %d", &a, &b, &c); 

    //b^2-4ac
    q = b * b;
    w = 4 * a * c;
    d = q - w;

    if (d < 0) {
      s=(sqrt(abs(d)));
      x1 = (-b) / (2 * a);
      x2 = (-b) / (2 * a);  
      printf("x1=%.2f+i*%.2f, x2=%.2f+i*%.2f", x1, s, x2, s);
    }
    else {
      x1 = (-b + sqrt(d)) / (2 * a);
      x2 = (-b - sqrt(d)) / (2 * a);   
      printf("x1=%.2f, x2=%.2f", x1, x2);
    }
    return 0;
}

