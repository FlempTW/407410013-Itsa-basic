#include<stdio.h>

int gcd(int a,int b)
{
    if(b>a)
    {
        int tmp=a;
        a=b;
        b=tmp;
    }
    if(!(a%b))
        return b;
    else
        return gcd(b,a%b);
}
int main()
{
    int i;
    int x,y;
    scanf("%d %d",&x,&y);
    i=gcd(x,y);
    printf("%d\n",i);
}
