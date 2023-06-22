#include<stdio.h>
#include<string.h>
#define MAXLEN 51
typedef char ChuoiKT[MAXLEN];

void Nhapchuoi(ChuoiKT s)
{
	do
	{
		gets(s);
	}while(!(strlen(s)<=MAXLEN-1&&strlen(s)>=1));
}
char Tim2KT(ChuoiKT s)//tim thay tra ve vi tri dau tien 
{
	for(int i=0;i<=strlen(s)-2;i++)
		if(s[i]==' '&&s[i+1]==' ')
			return i;
	return -1;
}
void XoaKT(ChuoiKT s,int x)
{
	for(int i=x+1;i<=strlen(s)-1;i++)
		s[i-1]=s[i];//dich trai
	s[strlen(s)-1]='\0';
}
void Trim(ChuoiKT s)
{
	//xoa khoang trang du dau chuoi
	while(s[0]==' ')
		XoaKT(s,0);
	//xoa khoang trang du cuoi chuoi
	while(s[strlen(s)-1]==' ')
		XoaKT(s,strlen(s)-1);
	//xoa khoang trang o giua chuoi
	while(Tim2KT(s)!=-1)
	{
		int vtx=Tim2KT(s);
		XoaKT(s,vtx);
	}
}
void Proper(ChuoiKT s)
{
	strlwr(s);			//chuyen cac ki tu trong chuoi sang in thuong
	for(int i=0;i<=strlen(s)-1;i++)
		if(s[i]==' '&&s[i+1]>='a'&&s[i+1]<='z')
			s[i+1]=s[i+1]-32;
		if(s[0]>='a'&&s[0]<='z')
			s[0]=s[0]-32;	
}
int main()
{
	
	ChuoiKT s;
	Nhapchuoi(s);
	Trim(s);
	Proper(s);
	puts(s);
}
