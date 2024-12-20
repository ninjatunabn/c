#include <stdio.h>

int main(){
    int n, x, flag=0;
    printf("heden shirheg too oruulah ve?");
    do
    {
        scanf("%d", &n);
    } while (n < 1 || n >= 100);
    printf("%d shirheg toog oruulna uu: ", n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        printf("%d, ", a[i]);
    }
    printf("\n");
    printf("x toog oruulna uu: \n");
    scanf("%d", &x);
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            flag = 1;
            printf("%d-n too husnegtiin %d-t baina", x, i+1);
        }
    }
    if(flag == 0)
        printf("-1");
}