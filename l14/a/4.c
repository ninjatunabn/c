#include <stdio.h>

int *find(int *begin, int *end, int x, int y);

int main(){
    int a[5] = {3, 7, 1, 2, 4};
    int *p, x, y;
    printf("haih too: ");
    scanf("%d", &x);
    p = find(a, a + 5, x, y);
    // if(p == NULL)
    //     printf("%d too oldsongui\n", x);
    // else   
    //     printf("%d too %d bairlald oldloo", x, p - a + 1);
}

int *find(int *begin, int *end, int x, int y){
    for(int *i = begin; i < end; i++){
        if(*i == x){
            printf("solih y: ");
            scanf("%d", &y);
            *i = y;
            printf("soligdson utga %d", *i);
            return i;
        }
    }
    return NULL;
}