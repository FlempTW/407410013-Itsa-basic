#include<stdlib.h>
#include<stdio.h>
void unlock(int key)
{
    if(key==1)
        printf("    *");
    else if(key==2)
        printf("*    ");
    else if(key==3)
        printf("    *");
    else if(key==4)
        printf("*   *");
    else if(key==5)
        printf("*****");

}
void space()
{
    printf(" ");
}
void enter()
{
    printf("\n");
}
int main()
{

    int table[11][6]= {{5,4,4,4,5},{1,1,1,1,1},{5,3,5,2,5},{5,3,5,3,5},{4,4,5,3,3},{5,2,5,3,5},{5,2,5,4,5},{5,3,3,3,3},{5,4,5,4,5},{5,4,5,3,3}};
    int a,b,c,d;
    char x[4],y,z,zyz;
    scanf("%s",x);
    a=x[0]-'0';
    b=x[1]-'0';
    c=x[2]-'0';
    d=x[3]-'0';
    table[0][0] = 5;
    for(int i=0; i<5; i++)
    {
        unlock(table[a][i]);
        space();
        unlock(table[b][i]);
        space();
        unlock(table[c][i]);
        space();
        unlock(table[d][i]);
        enter();
    }
    return 0;
}
