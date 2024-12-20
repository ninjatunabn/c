#include <stdio.h>

void read(int a[], int n); 
void print(int a[], int n);

int main(){
    int n, m;
    printf("n toog oruulna uu: \n");
    scanf("%d", &n);
    int a[n];
    read(a, n);
    print(a, n);
    printf("m toog oruulna uu: \n");
    scanf("%d", &m);
    int b[n];
    read(b, m);
    print(b, m);
}

void read(int a[], int n){
    int i;
    printf("%d shirheg toog oruulna uu:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
}
void print(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}