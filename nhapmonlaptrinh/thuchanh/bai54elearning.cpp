#include<stdio.h>
#include<string.h>
void chuhoa(char s[])
{
    for(int i=0;i<strlen(s);i++)
        if(s[i]>=97&&s[i]<=122)
            s[i]=s[i]-32;
        puts(s);
}
void chuthuong(char s[])
{
    for(int i=0;i<strlen(s);i++)
        if(s[i]>=65&&s[i]<=90)
            s[i]=s[i]+32;
        puts(s);
}
void chuhoadau(char s[])
{
    int i;
    if(s[0]!=' ')
    {
        s[0]=s[0]-32;
        for(int i=1;i<strlen(s);i++)
        {
            if(s[i]==' '&&s[i+1]!=' '&&s[i+1]>='a'&&s[i+1]<='z')
            {
                s[i+1]=s[i+1]-32;
            }
        }
    }
    else
    {
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]==' '&&s[i+1]!=' '&&s[i+1]>='a'&&s[i+1]<='z')
            {
                s[i+1]=s[i+1]-32;
            }
        }
    }
    puts(s);
}
int main()
{
    char s[200];
    printf("Nhap vao 1 chuoi:");
    gets(s);
    chuhoa(s);
    chuthuong(s);
    chuhoadau(s);
}
