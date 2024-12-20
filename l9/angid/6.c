#include <stdio.h>

int A[100];
int prime_range(int, int);
int l = 0;
int count = 0;

int main(){
    printf("a ,b: \n");
    int a, b;
    scanf("%d %d", &a, &b);
    int c = prime_range(a, b);
    printf("%d\n", c);
    for(int i = 0; i < c; i++){
        printf("%d ", A[i]);
    }
}

int prime_range(int a, int b){
    for(int i = a; i <= b; i++){
        for(int j = 2; j < b; j++){
            if(i % j == 0){
                break;
            }
            else if(i % j == 1){
                A[l] = i;
                l++;
                count++;
            }
        }
    }
    return count;
}