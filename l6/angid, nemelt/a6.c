#include <stdio.h>

int main(){
    int n, m, x;
    do
    {
        printf("n toog oruulna uu:\n");
        scanf("%d", &n);
        printf("m toog oruulna uu:\n");
        scanf("%d", &m);
    } while ((n < 1 || n >= 100) || (m < 1 || m >= 100));

    int a[n][m];
    printf("%dx%d arrayiin %d elementuudiig oruulna uu: ", n, m, n*m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    int flag = 0;
    scanf("%d", &x);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] == x){
                flag = 1;
                printf("%d mur %d bagana\n", i+1, j+1);
            }
        }
        // printf("\n");
    }

    // for(int i = 0; i < n; i++){
    //     if(a[i] == x){
    //         flag = 1;
    //         printf("%d-n too husnegtiin %d-t baina", x, i+1);
    //     }
    // }

    if(flag == 0)
        printf("-1");
}