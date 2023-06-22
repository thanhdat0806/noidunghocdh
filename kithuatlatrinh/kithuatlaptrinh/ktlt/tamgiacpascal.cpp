#include<stdio.h>
int main()
{
    int i, j, n, kq;
    do
	{
    	scanf("%d",&n);
	}while(n<1||n>50);
    for( i = 1; i <= n; i++ )
    {
        printf("1");
        kq = 1;
        for( j = 2; j <= i; j++ )
        {
            kq=kq*(i-j+1)/(j-1);
            printf(" %d",kq);
        }
        printf("\n");
    }
}
