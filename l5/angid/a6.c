#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    // mur = 2*n-1;
    // if(n%2==1){         //sondgoi
    //     bottom=(n/2)+1;
    // }
    // else bottom=n/2;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("x");
        }
        printf("\n");
    }
    for(int i=n-1; i>=1; i--){
        for(int j=1; j<=i; j++){
            printf("x");
        }
        printf("\n");
    }
}