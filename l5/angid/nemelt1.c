#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i=2; i<n; i++){
        if(n%i==0){
            printf("anhnii too bish");
            break;
        }
        else
            printf("anhnii too mun");
            break;
    }
}