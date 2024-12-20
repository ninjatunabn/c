#include <stdio.h>

int count(int n, int a[]);

int main(){
    int n;
    printf("n: ");
    scanf("%d", &n);
    int a[n];
    printf("%d\n", count(n, a));

    for(int i = 0; i < count(n, a); i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

int count(int n, int a[]){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            a[cnt] = i;
            cnt++;
        }
    }
    return cnt;
}