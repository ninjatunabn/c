#include <stdio.h>

void read(int *p);
int a[100];

int main(){
    read(*a);
    // print(a, a + 3);
}

void read(int *p){
    scanf("%d", p + 2);
}
// void print(int *begin, int *end){
//     for(int j = 0; j < 5; j++){
//         printf("%d ", *(a + j));
//     }  
// }