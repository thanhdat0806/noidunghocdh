#include<stdio.h>
using namespace std;
int main()
{
    int m,n,sm=0,sn=0;
    printf("nhap m:");
    scanf("%d",&m);
    printf("nhap n:");
    scanf("%d",&n);
    if(UCLN(n)==UCLN(m)){
        printf("m,n la cap so ban");}
    else
        printf("m,n khong phai la cap so ban");
}   
void UCLN(int n)
{
    int t=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            t=t+i;
        }
    }
    return t;
}
