#include<stdio.h>
#include<string.h>
#include<conio.h>

void NhapChuoi(char s[])
{
    printf("Nhap 1 chuoi:");
    gets(s);
}
void XuatChuoi(char s[])
{
    printf("%s",s);
}
void inKT(char s[])
{
    for(int i=0;i<strlen(s);i++)
        if(s[i]==' '&&s[i+1]!=' ') printf("\n");
        else
            printf("%c\n",s[i]);
}
void xoa(char s[], int vtxoa)
{
    int n=strlen(s);
    for(int i= vtxoa;i<n;i++)
        s[i]=s[i+1];
    s[n-1]='\0';
}
void xoakt(char s[])
{
    for(int i=0;i<strlen(s);i++)
        if(s[i]==' '&&s[i+1]==' ')
        {
            xoa(s,i);
            i--;
        }
    if(s[0]==' ')
        xoa(s,0);
    if(s[strlen(s)-1]==' ')
        xoa(s,strlen(s)-1);
}
int demSoTu(char s[])
{
    int soTu=0;
    for(int i=0;i<strlen(s)-1;i++)
        if(s[i]==' '&&s[i+1]!=' ')
        {
            soTu++;
        }
    if(s[0]!=' ')
        soTu++;
    return soTu;
}
void tudau(char s[])
{
    char tudau[]="";
    int i=0;
    while(s[i]!=' ')
    {
        tudau[i]=s[i];
        i++;
    }
    tudau[i]='\0';
    printf("\nTu dau chuoi: %s", tudau);
}
int main()
{
    char s[100];
    NhapChuoi(s);
    XuatChuoi(s);
    inKT(s);
    xoakt(s);
    XuatChuoi(s);
    printf("\nSo tu co trong chuoi la:%d\n",demSoTu(s));
    strcpy(s1,s);
    tudau(s1);
}
