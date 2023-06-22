#include<stdio.h>

struct PhanSo
{
	int tu;
	int mau;	
};

void Nhap(int &n, PhanSo ps[])
{
	scanf("%d", &n);
	
	for(int i = 0; i<n; i++)
	{
		scanf("%d %d", &ps[i].tu, &ps[i].mau);
	}
}

int UCLN(int x, int y)
{
	if(y == 0)
	{
		return x;
	}
	return UCLN(y, x%y);
}

void In_TG(int n, PhanSo ps[])
{
	for(int i = 0; i<n; i++)
	{
		printf("%d/%d ",ps[i].tu / UCLN(ps[i].tu, ps[i].mau), ps[i].mau / UCLN(ps[i].tu, ps[i].mau));
	}
	printf("\n");
	for(int i = 0; i<n; i++)
	{
		printf("%.2f ",float(ps[i].tu) / ps[i].mau );
	}
}
int main()
{	
	int n;
	PhanSo ps[100];
	Nhap(n, ps);
	In_TG(n, ps);
}
