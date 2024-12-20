#include <stdio.h>

void erembe(int n,int a[n]){
    int usuhguiflag = 0;
    int buurahguiflag = 0;

    for (int i = 0; i < n-1; i++) {
        if (a[i] > a[i+1]) {
            usuhguiflag = 1;
        }
        if (a[i] < a[i+1]) {
            buurahguiflag = 1;
        }
    }
    if(usuhguiflag == 0){
        printf("ene husnegt usuh erembetei");
    }
    else if(buurahguiflag == 0){
        printf("ene husnegt buurah ermetei baina");
    }
    else {
        printf("ene husnegt usuh esvel buurah erembegui");
    }
}

int main(){
    int n;
    printf("n toog oruulna uu: ");
    do
    {
        scanf("%d", &n);
    } while (n < 1 || n >= 100);
    int a[n];
    printf("%d shirheg toog oruulna uu:", n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    erembe(n, a);
    return 0;
}