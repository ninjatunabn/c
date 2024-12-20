#include <stdio.h>

int main(){
    int n;
    for(int i=1; i<=10; i++){
        for(int j=1; j<=10; j++){
            n = i * j;
            printf("%d x %d = %d\n", i, j, n);
        }
    }
}