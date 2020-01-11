#include<stdio.h>

#define MAX 0x3f3f3f
int main()
{
    float number;
    float max=-MAX,min=MAX;
    for(int i=0;i<10;i++)
    {
        scanf("%f",&number);
        if(number<min)
        {
            min=number;
        }
        if(number>max)
        {
            max=number;
        }

    }
    printf("maximum:%.2f\n",max);
     printf("minimum:%.2f\n",min);
}
