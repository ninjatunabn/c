#include <stdio.h>

int count(int n);

int main(){
    int n;
    printf("n: ");
    scanf("%d", &n);
    printf("%d\n", count(n));
}

int count(int n){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cnt++;
        }
    }
    return cnt;
}