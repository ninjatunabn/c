#include <stdio.h>

int main(){
    int n, m, k;
    printf("n, m, k:\n");
    scanf("%d %d %d", &n, &m, &k);
    int A[n][m], B[m][k], C[n][k];

    printf("a matrixiin elements (%d x %d):\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("b matrixiin elements (%d x %d):\n", m, k);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            C[i][j] = 0;
            for (int l = 0; l < m; l++) {
                C[i][j] += A[i][l] * B[l][j];
            }
        }
    }

    printf("c array: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}