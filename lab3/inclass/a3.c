
#include <stdio.h>
#include <math.h>

int main(){
    char a[6];
    int oir, hol;
    
    printf("x1,y1,x2,y2,x3,y3iig oruulna uu\n");
    for (int i=1; i<7; i++){
        scanf("%c", &a[i]);
    }

    //includes negative numbers
    for(int i=0; i<6; i++){
        if(a[i]< 0){
            a[i]*=(-1);
            printf("%c",a[i]);
        }
    }

    
}






// neg=x1+y1;
//     hoyr=x2+y2;
//     gurav=x3+y3;
//     //case1
//     if((neg < hoyr) && (neg < gurav) && (hoyr > gurav))
//         oir=neg;
//         hol=hoyr;
//     else if ((neg < hoyr) && (neg < gurav) && (hoyr > gurav))
//         oir=neg;
//         hol=gurav;
//     //case2
//     else if ((hoyr < neg) && (hoyr < gurav) && (neg > gurav))
//         oir=hoyr;
//         hol=neg;
//     else if ((hoyr < neg) && (hoyr < gurav) && (neg < gurav))
//         oir=hoyr;
//         hol=gurav;
//     //case3
//     else if ((gurav < neg) && (gurav < hoyr) && (neg < hoyr))
//         oir=gurav;
//         hol=hoyr;    
//     else if ((gurav < neg) && (gurav < hoyr) && (neg > hoyr))
//         oir=gurav;
//         hol=neg; 
    
//     //print near one
//     if (oir=neg)
//         printf("oir=%f%f", x1,y1);
//     else if (oir=hoyr)
//         printf("oir=%f%f", x2,y2);
//     else if (oir=gurav)
//         printf("oir=%f%f", x3,y3);
//     //print far one
//     if (hol=neg)
//         printf("oir=%f%f", x1,y1);
//     else if (hol=hoyr)
//         printf("oir=%f%f", x2,y2);
//     else if (hol=gurav)
//         printf("oir=%f%f", x3,y3);