// read 2 arrays, join() fucntion ruu damjuulah
// 1st array zalgah 2nd array fucntion

#include <stdio.h>

void read(int A[], int n);
void print(int A[], int n);

int main(){
    int a[100], b[100], n, m;
    printf("n:");
    scanf("%d", &n);
    read(a, n);
    print(a, n);

    printf("m: ");
    scanf("%d", &m);
    read(b, m);
    print(b, m);

    int k = join(a, b, n, m);
    print(a, k);
    return 0;
}

void read(int A[], int n){
    int i;
    printf("%d shirheg toog oruulna uu:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
}

void print(int A[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}

int join(int A[], int B[], int n, int m){
    for(int j = 0; j < m; j++){
        A[n+j] = B[j];
    }
    return n+m;
}