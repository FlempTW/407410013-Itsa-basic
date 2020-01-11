#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int number[8];
    int input=0;
    int output=0;
    while(scanf("%d",&input)!=EOF)
    {
        if(input<0)
            input=input+256;
        for(int i=7; i>=0; i--)
        {
            int persent=pow(2,i);
            if(input/persent>=1)
            {
                input=input-persent;
                number[i]=1;
            }
            else
            {
                number[i]=0;
            }
        }
        for(int i=7; i>=0; i--)
            printf("%d",number[i]);
        printf("\n");
    }

}
