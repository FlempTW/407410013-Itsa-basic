#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int input_amount=0;
    long long int a=0,b=0,c=0,d=0;
    char  symbol[100]={'\0'};
    scanf("%d",&input_amount);
    for(int i=0; i<input_amount; i++)
    {
        scanf("%s",symbol);
        scanf("%d %d %d %d",&a,&b,&c,&d);
        //printf("%d %d %d %d\n",a,b,c,d);
        if((strcmp(symbol,"*"))==0)
            printf("%lld %lld\n",a*c-b*d,a*d+c*b);
        else if(strcmp(symbol,"+")==0)
            printf("%lld %lld\n",a+c,b+d);
        else if(strcmp(symbol,"-")==0)
            printf("%lld %lld\n",a-c,b-d);
    }
}
