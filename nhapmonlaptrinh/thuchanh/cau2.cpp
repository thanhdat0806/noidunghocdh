#include<stdio.h>
int tong(int n)
{
    int t=0;
    for(int i=1;i<=n;i=i+2)
    {
        t=t+i;
    }
    return t;
}
int mau(int n)
{
    int m=0;
    m=n+1;
}
int main()
{
    int n;
    float S=0;
    printf("Nhap n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2)
    {
        S=S+((float)tong(i)/(float)mau(i));
    }
    printf("S=%0.2f",S);
}
