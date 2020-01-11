#include<stdio.h>

int main()
{
    int hour=0,minute=0;
    int lefthour=0,leftminute=0;
    int totoal=0;
    int cost=0;
    scanf("%d %d",&hour,&minute);
    scanf("%d %d",&lefthour,&leftminute);
    totoal=(lefthour-hour)*60+leftminute-minute;
    if(totoal/30==0)
    {
        cost=0;
    }
    else if(totoal/60>=2)
    {
        cost=30*4;
        totoal=totoal-120;
        if(totoal/60>=2)
        {
            cost=cost+40*4;
            totoal=totoal-120;
            cost=cost+totoal/30*60;
        }
        else
        {
            cost=cost+totoal/30*40;
        }
    }
    else
    {
        cost=30*(totoal/30);
    }
    printf("%d\n",cost);
    return 0 ;
}
