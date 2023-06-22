//minh hoa cách xây dung và su dung hàm don gian
#include <stdio.h>

// ham tinh & in ra tong cua 2 so nguyen
void TinhTong2So(int a, int b)
{
	printf("Tong %d + %d = %d\n", a,b,a+b);
}
//ham tra ve tong 2 so nguyen
int Tong(int a, int b)
{
	return a+b;
}
int main()
{ 
	int x=10,y=430;
 TinhTong2So(x,y);
 printf(" Tong %d +%d = %d", x,y, Tong(x,y));
}
