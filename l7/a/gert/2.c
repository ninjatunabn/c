// #include <stdio.h>

// int main(){
//     int n, m, c;
//     do
//     {
//         printf("n toog oruulna uu:\n");
//         scanf("%d", &n);
//     } while (n < 1 || n >= 100);

//     int value = 1;
//     for (int i = 1; i <= n; i++){
//         for (int j = value; j <= n; i++){
//             if(ji){
//                 printf("%d", )
//             }
//         }
//         value++;
//         printf("\n");
//     }
// }

//     // for (int i = 1; i <= n; i++) {
//     //     for (int j = 0; j < n; j++) {
//     //         if (j < i) {
//     //             printf("%d ", i + j);
//     //         } else {
//     //             printf("%d ", 2 * i - j - 1);
//     //         }
//     //     }
//     //     printf("\n");
//     // }

//     // for (int i = 1; i <= n; i++) {
//     //     for (int j = 0; j < n; j++) {
//     //         if (j < i) {
//     //             printf("%d ", i + j);
//     //         } else {
//     //             printf("%d ", 2 * i - j - 1);
//     //         }
//     //     }
//     //     printf("\n");
//     // }

//     // char a[n][n];
//     // for (int i = 0; i < n; i++) {
//     //     for (int j = 1; j <= n/2; j++) {
//     //         if(i <= j){
//     //             c = i +j;
//     //             printf("%d", c);
//     //         }
//     //         else {
//     //             c -= 1;
//     //         }
//     //     }
//     //     // printf("\n");
//     // }
//     // for (int i = 1; i <= n; i++) {
//     //     for (int j = 0; j < n; j++) {
//     //         if (j <= i) {
//     //             printf("%d ", i + j);
//     //         } else {
//     //             printf("%d ", i + j - 2 * (j - i + 1));
//     //         }
//     //     }
//     //     printf("\n");
//     // }
// //     return 0;
// // }

// // #include <stdio.h>

// // int main(){
// //     int n;
// //     do {
// //         printf("n toog oruulna uu:\n");
// //         scanf("%d", &n);
// //     } while (n < 1 || n >= 100);

// //     for (int i = 1; i <= n; i++) {
// //         for (int j = 0; j < n; j++) {
// //             if (j < i) {
// //                 printf("%d ", i + j);
// //             } else {
// //                 printf("%d ", i + (n - j - 1));
// //             }
// //         }
// //         printf("\n");
// //     }
// //     return 0;
// // }


#include <stdio.h>

int main() {
    int n, i, j;  // Declare variables
    
    printf("Enter the value of n: ");
    scanf("%d", &n);  // Input value of n
    
    for (i = 1; i <= n; i++) { // Outer loop for rows
        // Step 1: Print increasing sequence
        for (j = i; j <= n; j++) {
            printf("%d ", j);
        }
        // Step 2: Print decreasing sequence
        for (j = n - 1; j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");  // Move to the next line
    }
    
    return 0;
}
