#include <stdio.h>

int main()
{
    int m;
    int soto50, soto20, soto5;
    do
    {
        printf("Nhap so tien can doi:");
        scanf("%d",&m);
        if(m<=0)
            printf("So tien rut phai >0 \n");
        else if(m%5!=0)
            printf("Khong doi duoc \n");
    }while(m<=0||m%5!=0);
    soto50 = m/50;
    soto20 = m/20;
    soto5 = m/5;
    for(int i=0; i<=soto50;i++)
    {
        for(int j=0; j <= soto20 ; j++)
            {
                for(int k=0; k<=soto5;k++)
                {
                    if((50*i+20*j+5*k) == m)
                        {
                        printf("so to 50: %d, so to 20: %d, so to 5: %d\n",i,j,k);
                        }
                }
            }
    }
}
