#include <stdio.h>

int main(){
    int n, m;
    do
    {
        printf("n toog oruulna uu:\n");
        scanf("%d", &n);
    } while (n < 1 || n >= 100);
    float a[n];
    printf("%d shirheg toog oruulna uu:", n);
    for(int i=0; i<n; i++){
        scanf("%f", &a[i]);
    }

    int count = 0;
    int total = 0;
    float average;
    float av_buhel;
    float av_uldegdel;
    
    for(int i=0; i<n; i++){
        total += a[i];
    }
    av_buhel = total/n;
    av_uldegdel = total%n;
    average = av_buhel + av_uldegdel;
    // printf("dundaj buhel: %.2f\n", av_buhel);
    // printf("dundaj butarhai: %.2f\n", av_uldegdel);
    printf("dundaj undur: %.2f\n", average);
    
    for(int i=0; i<n; i++){
        if(a[i] > average)
            count++;
    }
    printf("dundjaas undur huuhdiin too: %d", count);
    return 0;
}