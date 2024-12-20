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

    int count=0;
    int ab[n + m];
    for (int i = 0; i < n; i++) {
        ab[count++] = a[i];
    }

    int f = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < count; j++) {
            if (ab[j] == b[i]) {
                f = 1;
                break;
            }
        }
        if (!f) {
            ab[count++] = b[i];  
        }
    }

    for(int i = 0; i < count; i++){
        printf("%d ", ab[i]);
    }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         if(a[i] != b[j]){
    //             count++;
    //         }
    //     }
    // }
    // printf("count = %d\n", count);

    // int cnt = n + m - count;
    // int ab[cnt];
    // for(int q = 0; q < cnt; q++){
    //     for(int i=0; i<n; i++){
    //         for(int j=0; j<m; j++){
    //             if(a[i] != b[j]){
    //                 ab[q] = a[i];
    //                 ab[q+1] = b[j];
    //                 // printf("%d, ", a[i]);
    //             }
    //         }
    //     }
    // }
    // for(int i = 0; i <= cnt; i++){
    //     printf("%d ", ab[i]);
    // }
    return 0;
}