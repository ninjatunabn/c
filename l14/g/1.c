#include <stdio.h>

void read(int *begin, int *end);
void print(int *begin, int *end);
int a[100];

int main(){
    read(a, a + 3);
    print(a, a + 3);
}

void read(int *begin, int *end){
    for(int i = 0; i < 5; i++){
        scanf("%d", a + i);
    }
}
void print(int *begin, int *end){
    for(int j = 0; j < 5; j++){
        printf("%d ", *(a + j));
    }  
}