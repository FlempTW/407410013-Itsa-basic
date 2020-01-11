#include<stdio.h>

int main()
{
    int a=0;
    while(scanf("%d",&a)!=EOF)
    {

        while(a%3)
        {
            a--;
        }
        int n=(a/3);
        //printf("%d %d\n",a,n);
        int total=(3+a)*n/2;
        printf("%d\n",total);

    }
    return 0;
}
