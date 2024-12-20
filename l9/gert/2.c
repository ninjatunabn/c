// n toonii tsifruudiin niilberiig butsaah funciton
// 1-N zavsart orshih tsifruudiin niilbert huvaagddag toog oloh

#include <stdio.h>

int digit_sum(int n);

int main(){
    int n;
    printf("n: ");
    scanf("%d", &n);
    printf("sum = %d\n", digit_sum(n));
    printf("tsifruudiin niilbert huvaagddag toonuud: ");
    for(int i = 1; i < n; i++){
        if((i % digit_sum(n)) == 0){
            printf("%d ", i);
        }
    }
}

int digit_sum(int n){
    int sum = 0;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}