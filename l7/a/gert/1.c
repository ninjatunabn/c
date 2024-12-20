#include <stdio.h>

int main(){
    int n, m;
    do
    {
        printf("n toog oruulna uu:\n");
        scanf("%d", &n);
    } while (n < 1 || n >= 100);
    do
    {
        printf("m toog oruulna uu:\n");
        scanf("%d", &m);
    } while (m < 1 || m >= 100);

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}