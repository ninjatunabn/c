//garaas n shirheg too uguhud 123 tsifruud daraalj orson toonuudiig ol
#include <stdio.h>
int n, a;
int main()
{
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &a);
        if(a%10==3)
        {
            if( ((a/10)%10) ==2 )
            {
                if( ((a/10/10)%10) ==1 )
                {
                    printf("123-iig aguulsan too:%d\n", a);
                }
                a=a/10;
            }
            a=a/10;
        }
        a=a/10;
    }
    return 0;
}