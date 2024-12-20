//3n sariin calendar, 31 honogtoi
#include <stdio.h>
#include <math.h>

int main()
{
    int x=0;
    int udur;
    char *garag[7] = {"davaa", "mygmar", "lhagva", "purev", "baasan", "byamba", "nyam"};
    
    for(udur = 1; udur <=31; udur++){
        if(x>6){
            x=0;
        }
        if(x<7){
            printf("3.%d %s garag\n", udur, garag[x]);
            x++;
        }
    } 
}




    // for(int x=0; x<=24; x++){
    //     for(int i=x; i<x+7; ){
    //         for(int m = 1; m<=7; ){
    //             printf("3.%d %s garag\n", x, garag[i]);
    //             i++;
    //             m++;
    //         }
    //     }
    // }
    //     for(int i=x; i<x+7; i++){
    //     // for(int m = 1; m<=7; m++){
    //         printf("3.%d %s garag\n", i, garag[i]);
    //     }
    //     x += 7;
    // }while(x<32);
