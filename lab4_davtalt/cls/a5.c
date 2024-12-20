//0 ees ehlen n hurtel celsiusiig fahrenheit huvirgah
#include <stdio.h>

int main(){
    int n,c;
    float f;
    printf("n toog oruulna uu: ");
    scanf("%d", &n);
    
    //celsius to fahrenheit
    for(int c=0; c<=n; c++){
        f = (1.8*c) +32;
        if(f<=n){
            printf("fahrenheit: %.2f\n", f);
        }
    }
}