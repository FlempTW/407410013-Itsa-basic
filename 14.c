#include<stdio.h>
#include<string.h>
int main()
{
    char line[100000]={'\0'};
    char *head,*tail;
    while(scanf("%s",line)!=EOF)
    {
        int check=1;
        head=line;
        if(*head==' ')
            head++;
        tail=head;
        if(*head=='\n')
        {
            printf("NO\n");
            break;
        }

        while(*tail!='\n'&&*tail!='\0'&&*tail!=' '&&*tail!=EOF&&*tail!='\t'&&*tail<='9')
        {
            tail++;
        }
        tail--;
        while(*head!='\n'&&*head!=EOF&&*head!=' '&&*head!='\0')
        {
            //printf("%c %c\n",*head,*tail);
            if(*head!=*tail)
            {
                printf("NO\n");
                check=0;
                break;
            }
            tail--;
            head++;
        }
        if(check)
        {
            printf("YES\n");
        }
    }

}

