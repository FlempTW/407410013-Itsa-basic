#include<stdio.h>
int main()
{
    int money,change,apple,orange,peach;
    scanf("%d,%d,%d,%d",&money,&apple,&orange,&peach);
   //printf("%d,%d,%d,%d\n",money,apple,orange,peach);
    change=money-15*apple-20*orange-30*peach;
    if(change<0)
    {
        printf("0\n");
        return 1;
    }
    int fifty,five,one;
    fifty=change/50;
    change=change%50;
    five=change/5;
    one=change%5;
    printf("%d,%d,%d\n",one,five,fifty);
    return 0;



}
