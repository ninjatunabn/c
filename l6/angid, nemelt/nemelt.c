#include <stdio.h>

int main(){
    int n, m;
    do
    {
        printf("n toog oruulna uu:\n");
        scanf("%d", &n);
    } while (n < 1 || n >= 100);

    int a[n];
    printf("%d shirheg toog oruulna uu:", n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    do
    {
        printf("m toog oruulna uu:\n");
        scanf("%d", &m);
    } while (m < 1 || m >= 100);

    int b[m];
    printf("%d shirheg toog oruulna uu:", m);
    for(int i=0; i<m; i++){
        scanf("%d", &b[i]);
    }

    

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i] == b[j]){
                printf("%d, ", a[i]);
            }
        }
    }
}