// husnegtiin elementuudees hamgiin ihiig i hevleh function
#include <stdio.h>

int max(int a[], int n);

int main(){
    int n;
    printf("n:\n");
    scanf("%d", &n);
    int a[n];
    printf("n shirheg toog oruulna uu:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("max: %d\n", max(a, n));
    return 0;
}

int max(int a[], int n){
    int max = a[0];
    for(int i = 1; i < n; i++){
        if(max <= a[i]){
            max = a[i];
        }
        else {
            max == max;
        }
    }
    return max;
}