#include <stdio.h>
#include <math.h>

// int oron=6;
int n[6];    //234516
int e=0;
int s;

main(){
    scanf("%d", &n);
    for(int i=1; i<7; i++){
    // int s=n[i];     //s=2
    printf("%d too", n[i]);
        for(int i=1; i<7; i++){
            if (s==n[i+1]){   //2==3
                e+=1;
            }
        }
    printf("%d shirheg orson", e);
    }
}