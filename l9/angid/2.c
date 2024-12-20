#include <stdio.h>

int min5(int, int, int);
int main(){
    int n1, n2, n3;
    printf(" gurvan toog oruulna uu: \n");
    scanf("%d%d%d", &n1, &n2, &n3);
    printf("baga too: %d", min5(n1, n2, n3));
    return 0;
}

int min5(int n1, int n2, int n3){
    int min = n1;
    if(min > n2){
        min = n2;
        if(min > n3){
            min = n3;
            return n3;
        }
    }
    if(min > n3){
        min = n3;
        if(min > n2){
            min = n2;
            return n2;
        }
    }
    else{
        return n1;
    }
}