#include <stdio.h>

void read(int a[], int n);
void print(int a[], int n);
int *search(int a[], int value, int size);

int main(){
    int a[100];
    read(a, 5);
    print(a, 5);
    int *p;
    p = search(a, 3, 5);
    if(p == NULL)
        printf("Oldsongui\n");
    else
        printf("%d - iin too %ld bairlald oldloo\n", *p, p - a + 1);
    return 0;
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
        printf("%d", a[i]);
    }
    printf("\n");
}

int *search(int a[], int value, int size){
    for(int i = 0; i < size; i++){
        if(value == a[i]){
            return &a[i];
        }
    }
    return NULL;
}
