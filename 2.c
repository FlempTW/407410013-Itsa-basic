#include<stdio.h>

double mile_to_km(int *mile)
{
    return *mile*1.6;
}
int main()
{
    int mile=0;
    double km=0;
    while((scanf("%d",&mile))!=EOF)
    {
        km=mile_to_km(&mile);
        printf("%.1lf\n",km);
    }
    return 0;
}
