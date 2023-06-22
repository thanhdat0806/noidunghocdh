#include<stdio.h>
int main()
{
	int m,n,k;
	scanf("%d%d%d",&m,&n,&k);
	if(n-m==k-n)
	{
		printf("%d",m+n+k);
	}
	else
	{
		printf("KHONG PHAI CAP SO CONG");
	}
}
