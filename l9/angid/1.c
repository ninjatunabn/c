#include <stdio.h>

int is_even(int);

int main(){
    int n;
    printf("n toog oruulna uu: \n");
    scanf("%d", &n);
    printf("%d", is_even(n));
    // return 0;
}

int is_even(int n){
    if((n%2) == 1){
        return 0;
    }
    else{
        return 1;
    }
}