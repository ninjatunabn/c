#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
            // printf("%d", a[i][j]);
        }
        // printf("\n");
    }

    // diagonal
    int r_diag = 0;
    int l_diag = 0;
    for(int i=0; i<n; i++){
        printf("%d+", a[i][i]);
        l_diag += a[i][i];
    }
    printf("= %d (zuun diagonal)\n", l_diag);

    for(int i=n-1; i>=0; i--){
        printf("%d+", a[i][i]);
        r_diag += a[i][i];
    }
    printf("= %d (baruun daigonal)\n", l_diag);

    // row
    // int row=0;
    for(int i = 0; i<n; i++){
        int row=0;
        for(int j=0; j<n; j++){
            // printf("%d+", a[i][j]);
            row += a[i][j];
        }
        printf("%d ", row);
    }
    printf("\n");

        for(int i = 0; i<n; i++){
        int col=0;
        for(int j=0; j<n; j++){
            // printf("%d+", a[i][j]);
            col += a[j][i];
        }
        printf("%d ", col);
    }
}