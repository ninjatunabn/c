//n toonii buh huvaagchidiig ol
#include <stdio.h>
#include <math.h>

int main(){
    int n, s=0;
    printf("n toog oruulna uu:");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    { 
         if(n%i==0){
            printf("%d\n", i);
         }
    }
}