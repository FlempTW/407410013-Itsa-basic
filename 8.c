#include<stdio.h>

int main()
{
    int number=0,notprime=0;
    while(scanf("%d",&number)!=EOF)
    {
        for(int i=2;i<=number/2+1;i++)
        {
            if(!(number%i))
            {
                notprime=1;
            }
            //printf("%d %d %d\n",number,i,prime);
            if(notprime)
            {
                printf("NO\n");
                break;
            }
        }
        if(!notprime)
        {
            printf("YES\n");
        }
    }
}
