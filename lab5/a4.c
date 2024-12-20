// n too ugugduhud anhnii too esehiig shalga
#include <stdio.h>
int n;
int s=0;
int main()
{
    scanf("%d", &n);
    for(int i=2; i<n; i++)
    {
        if(n%i==1)         //5%2==1 s=2 
        {
            s+=i;
        }
        else
            s=0;
    }
    if(s=0)
    {
        printf("%d ni anhnii too bish", n);
    }
    else
        printf("%d ni anhnii too mun", n);
}