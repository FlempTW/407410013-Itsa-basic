#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double radius(int x,int y)
{
    return pow(x,2)+pow(y,2);
}
int main()
{
    int x=0,y=0;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
        if(radius(abs(x),abs(y))<=10000)
        {
            printf("inside\n");
        }
        else
        {
            printf("outside\n");
        }
    }
}
