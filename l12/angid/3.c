#include <stdio.h>

typedef struct
{
    int d, m, y;
} date;

void print(date dt);
date read();
int less(date a, date b);
date a;

int main(){
    int n;
    printf("n: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        date a = read();
        print(a);
    }
    if(less(a)){
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
    // printf("%04d/%02d/%02d\n", dt.y, dt.m, dt.d);
}

int less(date a, date b){
    if (a.y < b.y) return 1;
    if (a.y > b.y) return 0;

    if (a.m < b.m) return 1;
    if (a.m > b.m) return 0;

    if (a.d < b.d) return 1;
    return 0;
}

int sort(date a){
    
}