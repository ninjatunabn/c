// // #include <stdio.h>

// // int main(){
// //     // int a = 1;
// //     // int b = 0;
// //     // for(int i = a; i i)
// //     char a[10] = {10,20,30, 0, 0, 0, 0, 0, 0, 0};
// //     printf("%c", a[9]);
// // }
// #include <stdio.h>

// int main(){
//    char unelgee;
//    printf("usgen unelgeeg oruulna uu:" );
//    scanf("%c", &unelgee);
//    switch(unelgee){
//       case 'A': 
//            printf("90-100");
//            break;
//       case 'B': 
//            printf("80-99");
//            break;
//       case 'C': 
//            printf("70-79");
//            break;
//       case 'D':
//            printf("60-69");
//            break;
//       case 'F':
//            printf("0-59");
//            break;
//       default:
//            printf("buruu unelgee");
//     }
// return 0;
// }

// int main(){
//     int n=100, i;
//     for(i=10; i< n; i+=10)
//       n-=5;
//    return 0;
// }

#include <stdio.h>
int main() {
    int a, m;
    scanf("%d", &a);
    if(a < 100){
        printf("Солих боломжгүй");
        return 0;
    } else {
        m = (a/100)%10;
        if(m < 5){
            a = a + 2 * m * 100;
        } else {
            a = a + (m - 5) * 100;
        }
    }
    printf("a = %d\n", a);
    return 0;
}
