#include<stdio.h>

void KiemTraTamGiac(int a, int b, int c)
{
    if(a + b <= c || a + c <= b || b + c <= a)
    {
        printf("\bTam giac khong hop le.Xin kiem tra lai!");
    }
    else
    {
        printf("\Day la tam giac:");
        if((a==b)&&(b==c))
        {
            printf("\nDeu");
        }
        else
        {
            if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
            {
                printf("Vuong");
            }
            else if(a==b||a==c||b==c)
            {
                printf("Can");
            }
            else
            {
                printf("Thuong");
            }
        }
    }
}
int main()
{
    int a,b,c;
    printf("\nNhap canh a:");
    scanf("%d",&a);
    printf("\nNhap canh b:");
    scanf("%d",&b);
    printf("\nNhap canh c:");
    scanf("%d",&c);
    KiemTraTamGiac(a,b,c);
}
