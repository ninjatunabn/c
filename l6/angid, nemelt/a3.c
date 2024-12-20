#include <stdio.h>

int main(){
    int n, m;
    printf("n toog oruulna uu:\n");
    do
    {
        scanf("%d", &n);
    } while (n >= 100 );
    printf("m toog oruulna uu:\n");
    do
    {
        scanf("%d", &m);
    } while (m >= 100);

    int a[n], b[m];
    printf("n shirheg toog oruulna uu:\n");
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("m shirheg toog oruulna uu:\n");
        for(int i = 0; i<m; i++){
        scanf("%d", &b[i]);
        printf("%d ", b[i]);
    }
    printf("\n");
    int c[n+m];
    printf("c husnegtiin elementuud: ");
    for(int i = 0; i<n; i++){
        c[i] = a[i];
        printf("%d ", c[i]);
    }
    for(int i = 0; i<m; i++){
        c[i] = b[i];
        printf("%d ", c[i]);
    }
}

// #include <stdio.h>

// int main(){
//     unsigned char n, m;
//     printf("n toog oruulna uu:\n");
//     do
//     {
//         scanf("%u", &n);
//     } while (n >= 100 );
//     printf("m toog oruulna uu:\n");
//     do
//     {
//         scanf("%u", &m);
//     } while (m >= 100);

//     unsigned char a[n], b[m];
//     printf("n shirheg toog oruulna uu:\n");
//     for(unsigned char i = 0; i<n; i++){
//         scanf("%u", &a[i]);
//         printf("%u ", a[i]);
//     }
//     printf("m shirheg toog oruulna uu:\n");
//         for(unsigned char i = 0; i<m; i++){
//         scanf("%u", &b[i]);
//         printf("%u ", b[i]);
//     }
//     unsigned char c[n+m];
//     for(unsigned char i = 0; i<n; i++){
//         c[i] = a[i];
//         printf("%u ", c[i]);
//     }
//     for(unsigned char i = 0; i<m; i++){
//         c[i] = b[i];
//         printf("%u ", c[i]);
//     }
// }