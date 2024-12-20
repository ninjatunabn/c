#include <stdio.h>

int is_even(int);

int main(){
    int n;
    printf("n toog oruulna uu: \n");
    scanf("%d", &n);
    is_even(n);
    return 0;
}

int is_even(int n){
    for(int i = 0; i < n; i++){
        printf("%d ", i);
    }
}