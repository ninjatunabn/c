#include <stdio.h>
 
void even(int n, int *x);
 
int main(){
    int x, n;
    scanf("%d", &n);
    even(n, &x);
    if (x == 1)
        printf("tegsh\n");    
    else
        printf("sondgoi\n");
    return 0;
}
 
void even (int n, int *x){
    if(n%2 == 0){
        *x = 1;
    }
    else{
        *x = 0;
    }
}