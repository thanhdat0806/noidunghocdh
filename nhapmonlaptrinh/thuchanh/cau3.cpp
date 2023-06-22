#include<stdio.h>
#include<math.h>
#define MAX 20
typedef int mang[MAX];
void NhapMang(mang a, int &n)
{
    do{
        printf("Nhap so phan tu:");
        scanf("%d",&n);
    }while(n<3||n>MAX);
    for(int i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
}
void XuatMang(mang a, int n)
{
    for(int i=0;i<n;i++)
        printf("%d\t",a[i]);
}
void TimPT(mang a, int n, int &x)
{
    int kt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("vi tri cua x la: %d",i);
            kt=1;
            break;
        }
    }
    if(kt==0)
    {
        printf("-1");
    }
}
void xoaPTDT(mang a, int n)
{
    for(int i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    for(int i=0;i<n-1;i++)
    {
        printf("\n%d",a[i]);
    }
}
int main()
{
    mang a;
    int n,x;
    NhapMang(a,n);
    XuatMang(a,n);
    printf("\nNhap so can tim x:");
    scanf("%d",&x);
    TimPT(a,n,x);
    printf("\nMang sau khi xoa phan tu dau tien");
    xoaPTDT(a,n);
}

