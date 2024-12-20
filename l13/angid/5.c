#include <stdio.h>

struct Triangle{
    int a, b, c;
};

void read(struct Triangle *p);
 
int main(){
    struct Triangle g;
    read(&g);
    printf("%d %d %d", g.a, g.b, g.c);
    return 0;
}

void read(struct Triangle *p){
    int l, m, n;
    printf("gurvaljinii 3n taliig oruulna uu: \n");
    scanf("%d", &l);
    scanf("%d", &m);
    scanf("%d", &n);
    p -> a = l;
    p -> b = m;
    p -> c = n;
}