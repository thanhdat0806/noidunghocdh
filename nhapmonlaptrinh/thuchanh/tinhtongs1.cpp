#include<stdio.h>
#include<conio.h>

int main()
{
	int i, n;
	float S, T;
    i = 1;
	S = 0;
	T = 0;
	do
	{
	printf("\nNhap n: ");
	scanf("%d", &n);
	  if(n < 1)
	   {
		printf("\nN phai >= 1. Xin Nhap lai!");
	   }
	}while(n < 1);


	for(int i=1;i<=n;i++)
	{
		T = T + i;
		S = S + 1.0 / T;
	}
	printf("\nTong la %f", S);

	getch();
	return 0;
}
