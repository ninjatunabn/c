#include <stdio.h>
#include <math.h>


int main(){
    
    int a,b,c, min, mid;
    scanf("%d %d %d", &a, &b, &c);

    a < b && a < c && min == a;
    b < a && b < c && min == b;
    c < a && c < b && min == c;

    a < b && a > c && mid == a;
    b < a && b < c && mid == b;
    c < a && c < b && mid == c;


    printf("minimum:%d", a);
    b < a && b < c && printf("minimum:%d", b);

    // d = (a > b ) * a + (a <= b) * b;  
    // e = (a>b);    //a>b
    // e2 = (d>a);   //b>a
    // // d && e && printf("a>b");
    // f = (a > c ) * a + (a <= c) * c;
    // g = (f>c);    //a>c
    // g2 = (f>a);   //c>a
    // // f && g && printf("a>c");
    // h = (c > b ) * c + (c <= b) * b;
    // l = (h>c);    //b>c
    // l2 = (h>b);   //c>b
    // d && e && f && g && h && l && printf("ih:%d\ndund:%d\nbaga:%d", a,b,c);
    // d && e && f && g && h && l2 && printf("ih:%d\ndund:%d\nbaga:%d", a,c,b);
    // d && e2 && f && g && h && l && printf("ih:%d\ndund:%d\nbaga:%d", b,a,c);
    // d && e && f && g2 && h && l && printf("ih:%d\ndund:%d\nbaga:%d", b,c,a);
    // d && e && f && g2 && h && l2 && printf("ih:%d\ndund:%d\nbaga:%d", c,a,b);
    // d && e2 && f && g2 && h && l2 && printf("ih:%d\ndund:%d\nbaga:%d", c,b,a);

    return 0;
}