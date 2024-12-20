//0< n < 10 тоо өгөгдөхөд n оронтой бүх тоог хэвлэ.
#include <stdio.h>
int n;
int j;
int s=1;
int m;

int main()
{
    scanf("%d", &n);
    for(int i=0; i<=10; i++)
    {
        if(n==i)
        {
            printf("n too %i orontoi\n", i);
            do
            {
                s*=10;
                j++;
            } while (j<i-1);
            printf("%d\n", s);
            m==s;
            break;
        }
    }
    do
    {
        printf("%d ", m);
        m++;
    } while (m<=((s*10)-1));
}