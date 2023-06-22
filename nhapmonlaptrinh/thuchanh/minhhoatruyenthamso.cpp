/*
Minh hoa cach truyen tham so */
#include<stdio.h>

void HoanDoi(int x, int y)
{
	int t=x; x=y; y=t;
}
void HoanDoi2(int *x, int *y)
{
	int t=*x; // t= noi dung cua vung nho duoc tro den boi X
	 *x=*y; 
	 *y=t;
}
void HoanDoi3(int &x, int &y)
{
	int t=x; 
	 x=y; 
	 y=t;
}
int main()
{
	int a=10, b=20;
	printf("Truoc khi goi ham a= %d b=%d\n",a,b);
	HoanDoi(a,b); // truyen theo gia tri
	printf("Sau khi goi ham a=%d b=%d\n",a,b);
	HoanDoi2(&a,&b); // truyen theo dia chi(call by address)
	printf("Sau khi goi ham hoa doi 2 a= %d b=%d\n",a,b);
	HoanDoi3(a,b); // truyen tham chieu
	printf("Sau khi goi ham hoa doi 3 a= %d b=%d\n",a,b);
}
