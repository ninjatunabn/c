#include <stdio.h>
#include <math.h>

int n;
int ehnii, hoyr, a, gurav, duruv, sum;

int main(){
    do{
        scanf("100,000aas baga ym u tentsuu too oruulna uu: %d", &n);
    }
    while(n<=100000);

    //3t huvaagdah eseh,,, tsifriin niilber 3t huvaagdah
    //oron togtooh
    if(n<=10){
        if(n%3 == 0){
            a = 1;
        }
    }
    else if(n<100){
        ehnii = n/10;
        hoyr = n%10;
        if((ehnii+hoyr)%3 == 0){
            a = 1;
        }
    }
    else if(n<1000){
        ehnii = n/1000;
        hoyr = (n%1000)%100;
        gurav = (n%100)/10;
        duruv = n%10;
        sum = ehnii + hoyr + gurav + duruv;
        if((sum%3) == 0){
            a = 1;
        }
    }
    else if(n<10000){
        ehnii = n/1000;
        hoyr = (n%1000)%100;
        gurav = (n%100)/10;
        duruv = n%10;
        sum = ehnii + hoyr + gurav + duruv;
        if((sum%3) == 0){
            a = 1;
        }
    }
}

// main(){
//     scanf("%d", &n);
//     if(n%2==0){
//         printf("tegsh\n") ;
//         if((n%10==0 && n%4==0) || (n%2==0 && n%8==0)){
//             printf("10,4-d esvel 2,8-d zereg huvaagddag");
//         }
//         else ("10,4-d esvel 2,8-d zereg huvaagddaggui");
//     }
//     else if (n%2==1){
//         printf ("sondgoi\n");
//         if((n%3==0 && n%7==0) || (n%5==0 && n%9==0)){
//             printf("gurav dolood esvel tav ysd zereg huvaagddag");
//         }
//         else printf("gurav dolood esvel tav ysd zereg huvaagddaggui");
//     }
// }