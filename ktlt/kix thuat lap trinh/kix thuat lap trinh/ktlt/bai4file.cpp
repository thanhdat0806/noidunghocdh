#include<stdio.h>

struct sinhvien
{
	int mssv;
	char hoten[50];
	int toan, ly, hoa;
};



int main()
{
	int n;
	sinhvien sv[100];
	printf("nhap so sv\t");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		
		printf("nhap ten sv\t");
		fflush(stdin);
		gets(sv[i].hoten);
		printf("nhap MS sv\t");
		scanf("%d",&sv[i].mssv);
		printf("nhap toan sv\t");
		scanf("%d",&sv[i].toan);
		printf("nhap li sv\t");
		scanf("%d",&sv[i].ly);
		printf("nhap hoa sv\t");
		scanf("%d",&sv[i].hoa);
	}
//	for(int i=0;i<n;i++)
//	{
//		printf("%d",sv[1].hoa);
		
//	}
	
	FILE *f;
	f = fopen("D:\\nhiphan.bin", "wb");
	fwrite(&sv,sizeof(sinhvien),n,f);
	fclose(f);
	f = fopen("D:\\nhiphan.bin", "rb");
	fread(&sv,sizeof(sinhvien),n,f);
	fclose(f);
	printf("masv\t\thoten\t\t\ttoan\tli\thoa\t\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t\t%s\t\t\t%d\t%d\t%d\n",sv[i].mssv,sv[i].hoten,sv[i].toan,sv[i].ly,sv[i].hoa);
	}
		
		
	
	                                                    

}
