#include<stdio.h>
int table[10000]={'\0'};
int function(int n)
{
    if(n==0)
        return 1;
    else if(n==1)
        return 2;
    else
        return table[n]=function(n-1)+function(n/2);
}
int main()
{
    int i,ans;
    while(scanf("%d",&i)!=EOF)
    {
        ans=function(i);
        printf("%d\n",ans);
    }

}
