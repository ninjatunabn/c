// #include <stdio.h>
// #include <math.h>
// int a,b,c,d,e;
// int max;
// int min;
// int middle;
// main(){
//     scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
//     int n[5]={a,b,c,d,e};

//     for(int i=1; i<5; i++){
//         for(int j=2; j<5; j++){
//             if(n[i] >= n[j])
//                 max=n[i]; 
//             else 
//                 max=n[j]; 
//         }
//         for(int j=1; j<5; j++){
//             if(n[i] <= n[j])
//                 min=n[i]; 
//             else 
//                 min=n[j];
//         }
//     }
//     printf("max=%f\n",max);
//     printf("min=%f",min);
// }

#include <stdio.h>
#include <math.h>

int a,b,c,d,e;
int max;
int min;
int middle;

main(){
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e,&y3);

    if((a<b) && (a<c) && (a<d) && (a<e))
    min=a;
    else if((b<a) && (b<c) && (b<d) && (b<e))
    min=b;
    else if((c<a) && (c<b) && (c<d) && (c<e))
    min=c;
    else if((d<a) && (d<c) && (d<b) && (b<e))
    min=d;
    else if((e<a) && (e<c) && (e<b) && (e<d))
    min=e;
    if((a<b) && (a<c) && (a<d) && (a<e))
    min=a;
    else if((b<a) && (b<c) && (b<d) && (b<e))
    min=b;
    else if((c<a) && (c<b) && (c<d) && (c<e))
    min=c;
    else if((d<a) && (d<c) && (d<b) && (b<e))
    min=d;
    else if((e<a) && (e<c) && (e<b) && (e<d))
    min=e;
}
