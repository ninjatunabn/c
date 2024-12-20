#include <stdio.h>

typedef struct
{
    int d, m, y;
} date;

int udriin_zoruu(date a, date b);
int sard(int m);
int honogoor(date d);
date read();

int main(){
    date a = read();
    date b = read();
    int d = udriin_zoruu(a, b);
    printf("%d", d);
}

// 2024.11.12 
// 2024.12.20

date read(){
    date a;
    printf("On, sar, udriig oruulna uu: ");
    scanf("%d%d%d", &a.y, &a.m, &a.d);
    return a;
}

int udriin_zoruu(date a, date b){
    int total_a = honogoor(a);
    int total_b = honogoor(b);
    return total_b - total_a;
}

int honogoor(date d){
    int niit = 0;
    for (int i = 0; i < d.y; i++){
        niit += 365;
    }
    for (int j = 1; j < d.m; j++) {
        niit += sard(j);
    }
    niit += d.d;
    return niit;
}

int sard(int m) {
    if (m == 2) {
        return 28;
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        return 30;
    } else {
        return 31;
    }
}