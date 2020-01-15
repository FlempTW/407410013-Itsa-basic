#include<stdio.h>

int main()
{
    int gender,height;
    float standard_weight;
    while(scanf("%d %d",&height,&gender)!=EOF)
    {
        if(gender==1)
        {
            standard_weight=(height-80)*0.7;
        }
        else
        {
            standard_weight=(height-70)*0.6;
        }
        printf("%.1f\n",standard_weight);

    }
}
