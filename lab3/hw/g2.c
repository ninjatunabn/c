#include <stdio.h>
#include <math.h>

int y;  //year
int m;  //month
int d;  //day
int py=2024;
int pm=10;
int pd=2;

main(){
    scanf("on=%d sar= %d udur=%d", &y, &m, &d);
    if(py<y){            //ireedui jil
        printf("ireedui jil");
    }
    else printf("ungursun jil");
    else if(py==y){
        printf("odoo jil");
    }
    else if(py>y){
        printf("ungursun jil");
    }
}