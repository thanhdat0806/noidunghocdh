#include<stdio.h>
int main()
{
    int n;
    float S=0;
    float T=0;
    do
    {
        printf("\nNhap n:");
        scanf("%d", &n);
            if(n<1)
            {
                printf("\nn phai >=1. Nhap lai!");
            }
    }while(n<1);
    for(int i=1;i<=n;i++)
    {
        T=T+i;
        S=S + 1.0 / T;
    }
    printf("\nTong la %f",S);
}
