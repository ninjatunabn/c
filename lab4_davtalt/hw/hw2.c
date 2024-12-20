//a,b toonuudiin hiehuvaagchiig ol
#include <stdio.h>
#include <math.h>

int main()
{
    int a,b, xiex, min;
    scanf("%d%d", &a,&b);

    min = (a > b) ? b : a;          //12 18 --> 12
    printf("min: %d\n", min);
    for(int i=min; i>0; i--)        //12
    { 
         if(a%i==0){                
            if(b%i==0){
                printf("HIEX: %d", i);
                break;
            }
         }
    }
}