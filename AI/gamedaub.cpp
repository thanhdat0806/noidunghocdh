#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int n=30;
int x;

void NguoiBoc()
{
	printf("\nLuot cua ban.");
	printf("\nChon so vien soi muon boc (1-5): ");
	scanf("%d",&x);	
	while(x<1 || x>5)
	{
		printf("So soi ban muon boc khong hop le! Moi nhap lai: ");
		scanf("%d",&x);				
	}
	n-=x;
	printf("So soi con lai: %d",n);
	if(n==1)
	{
		printf("\nChuc mung! ban la nguoi chien thang :))");
		return;
	}
}

void MayBoc()
{
	int r;
	if(n%6 == 0)
	{
		r = 5;
	}
	else if(n%6 == 1)
	{
		srand(time(NULL));
		r = rand() % 5;
		if(r==0)
		{
			r+=1;
		}
	}
	else
	{
		r = n - (n/6*6+1);
	}		
	printf("\nLuot cua may\n");
	printf("May boc: %d\n",r);
	n=n-r;
	printf("So soi con lai: %d", n);
	if(n==1)
	{
		printf("\nTiec qua! Ban da thua roi :((");
	}
}
int main()
{
	char s[2];
	printf("\t\t-----Tro choi boc soi-----\n");
	printf("Co tong cong %d vien soi tren san",n);
	printf("\nNhiem vu cua ban la boc cac vien soi. Moi lan boc tu 1-5 vien soi");
	printf("\nAi la nguoi boc vien soi cuoi cung se thua cuoc!\n");
	printf("\nBan da san sang chua (Y/N): ");
	gets(s);
	if(strcmp(s,"Y")==0 || strcmp(s,"y")==0)
	{
		printf("\nChung ta cung bat dau!\n");
		printf("Hien dang co %d vien soi tren san",n);	
		do
		{
			NguoiBoc();
			if(n==1){
				return 0;
			}
			MayBoc();
			if(n==1){
				return 0;
			}
		}while(n>0);
	}
	else
		return 0;
}

