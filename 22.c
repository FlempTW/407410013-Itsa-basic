#include<stdio.h>

int main()
{
    int table[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d",&table[i][j]);
        }
    }

    int total=0,total2=0,total3=0,total4=0,check=0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            total=total+table[i][j];
            total2=total2+table[j][i];

        }
        if(total==3||total==0||total2==3||total2==0)
        {
            check=1;
            break;
        }
        total2=0;
        total=0;
        total3=total3+table[i][i];
        total4=total4+table[2-i][i];
    }
    if(total3==3||total3==0||total4==3||total4==0)
    {
        check=1;
    }

    if(check)
        printf("True\n");
    else
        printf("False\n");

}
