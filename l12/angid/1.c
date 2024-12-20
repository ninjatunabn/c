#include <stdio.h>

typedef struct
{
    int d, m, y;
} date;

void print(date dt);
date read();
int less(date a, date b);

int main(){
    date a = read();
    print(a);
    date b = read();
    print(b);
    if(less(a, b)){
        printf("a ni deer uyiinh");
    }
    else{
        printf("b ni deer uyiinh");
    }
    return 0;
}

date read(){
    date v;
    printf("On, sar, udriig oruulna uu: ");
    scanf("%d%d%d", &v.y, &v.m, &v.d);
    return v;
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

int less(date a, date b){
    if (a.y < b.y) return 1;
    if (a.y > b.y) return 0;

    if (a.m < b.m) return 1;
    if (a.m > b.m) return 0;

    if (a.d < b.d) return 1;
    return 0;
}