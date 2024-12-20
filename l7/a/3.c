#include <stdio.h>

int main(){
    int n, m;
    do
    {
        printf("n toog oruulna uu:\n");
        scanf("%d", &n);
    } while (n < 1 || n >= 100);
    int a[n];
    printf("%d shirheg toog oruulna uu:", n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    // int count=0;
    int flag = 1;       //tegsh hemtei
    // for(int i=0; i<n/2; i++){               //5 uyd 0 1      
    //     for(int j = n - 1; j >= n/2; j--){       //5 uyd 3 2 
    //         if(a[i] != a[j]){
    //             flag = 0;
    //             break;
    //         }
    //     }
    // }
    for (int i = 0; i < n/2; i++) {
        if (a[i] != a[n-1-i]) {
            flag = 0;  
            break;
        }
    }

    if(flag == 1){
        printf("tegsh hemtei");
    }
    else{
        printf("tegsh hemgui");
    }
}