//n too ugugduhud x2-y2 ni n tood huvaagddag baih buh 0<=x,y<n toog hevle
#include <stdio.h>

int main(){
    int n, a;
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((i*i)-(j*j) % n == 0){
                printf("x=%d, y=%d\n", i, j);
            }
        }
    }

    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(((i*i) - (j*j) % 2 == 0)){
                printf("y=%d, x=%d\n", i, j);
            }
        }
    }
}