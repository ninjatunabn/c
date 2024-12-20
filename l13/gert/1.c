#include <stdio.h>

void find(int a[], int n, int *min, int *max);

int main(){
    int n;
    printf("n toog oruullna uu: \n");
    scanf("%d", &n);
    int a[n];
    printf("a husnegtiin %d shirheg utgaiig oruulna uu: \n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int min, max;
    find(a, n, &min, &max);
    printf("min: %d\nmax: %d", min, max);
    return 0;
}

void find(int a[], int n, int *min, int *max){
    int minim = a[0];
    int maxim = a[0];
    for(int i = 0; i < n; i++){
        if(minim > a[i]){
            minim = a[i];
        }
        if(maxim < a[i]){
            maxim = a[i];
        }
    }
    *min = minim;
    *max = maxim;
}