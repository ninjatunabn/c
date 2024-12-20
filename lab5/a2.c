//urjihiin hurd hevleh
#include <stdio.h>
int s;

int main()
{
    for(int i=1; i<10; i++)
    {
        for(int j=1; j<10; j++)
        {
            s=i*j;
            printf("%d*%d=%d ",i,j,s);
        }
        printf("\n");
    }
}