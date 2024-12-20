#include <stdio.h>
#include <math.h>

float p;
float g;

main(){
    scanf("%f", &p);
    printf("onoo=%0.2f/35.00\n", p);
    g=(p*100)/35;
    printf("dun=%0.2f/100.00\n", g);
    (g<=59)==1 && printf("F");
    (g>=60 && g<70) == 1 && printf("D");
    (g>=70 && g<80) == 1 && printf("C");
    (g>=80 && g<90) == 1 && printf("B");
    (g>=90 && g<100) == 1 && printf("A");
}