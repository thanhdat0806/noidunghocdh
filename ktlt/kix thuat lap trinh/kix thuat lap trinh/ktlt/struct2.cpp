#include<stdio.h>
struct sinhvien
{
	char hoten [100];
	int MSSV;
	int toan;
	int li;
	int hoa;
	
};
int main()
{
	int n;
	struct sinhvien sv[100];
	printf("\nnhap so sinh vien\t");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("\nten sv\t");
		fflush(stdin);
		gets(sv[i].hoten);
		printf("\nnhap MSSV\t");
		scanf("%d",&sv[i].MSSV);
		printf("\ndiem toan sv %d",i);
		scanf("%d",&sv[i].toan);
		printf("\ndiem li sv %d",i);
		scanf("%d",&sv[i].li);
		printf("\ndiem hoa sv %d",i);
		scanf("%d",&sv[i].hoa);
		printf("\ntong diem sv %d la %d\n",i,sv[i].toan+sv[i].li+sv[i].hoa);
	}
	printf("__________sinh vien co tong diem > 15__________");
	for(int i=0;i<n;i++)
	{
		if(sv[i].toan+sv[i].li+sv[i].hoa>15)
		{
			printf("\nten sv\t%s",sv[i].hoten);
			printf("\nMSSV\t%d",sv[i].MSSV);
			printf("\ndiem toan sv %d%d",i,sv[i].toan);
			printf("\ndiem li sv %d%d",i,sv[i].li);
			printf("\ndiem hoa sv %d%d",i,sv[i].hoa);
			
		}

	}
}
