#include <stdio.h>

typedef struct
{
    int d, m, y;
} date;

void print(date dt);
date read();
date a;

int main(){
    int n;
    printf("n: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        a = read();
        print(a);
    }
    return 0;
}

date read(){
    printf("On, sar, udriig oruulna uu: ");
    scanf("%d%d%d", &a.y, &a.m, &a.d);
    return a;
}

void print(date dt){
    printf("%d/", dt.y);
    if(dt.m < 10){
        printf("0%d/", dt.m);
    }
    else{
        printf("%d/", dt.m);
    }
    if(dt.d < 10){
        printf("0%d", dt.d);
    }
    else{
        printf("%d", dt.d);
    }
    printf("\n");
}