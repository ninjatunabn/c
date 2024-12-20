// n too ugugduhud 1-n zavsar dahi buh anhnii too
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    printf("anhnii toonuud: ");
    for(int i=1; i<=n; i++){
        if(i%2==1){
            printf("%d, ", i);
        }
    }
}