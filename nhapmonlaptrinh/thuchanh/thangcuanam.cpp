/* Tính so ngày cua thang
Nhap mot thang duong lich, in ra so ngay cua tháng do
input: so thang trong nam(1..12)
output: so ngay cua thang
Trong 1 nam duong lich: 
thang 1.3.5.7.8.10.12 co 31 ngay
thang 4.6.9.11 co 30 ngay
thang 2 co ko nhuan thi co 28 ngay hoac nam nhuan co 29 ngay
nam nhuan la nam thoa man 1 trong 2 dieu kien:
+ chia het cho 400
+ chia het cho 4 va khong chia het cho 100
*/
#include <stdio.h>
int main(){
	unsigned char month;
	
	printf("Nhap mot thang duong lich:");
	scanf("%d", &month);
	/* cach 1: dung lenh re nhanh if
	if(month==1||month ==3||month == 5|| month ==7||month==8||month==10||month==12)
		printf("thang %d co 31 ngay\n", month);
	if(month==4||month ==6||month == 9|| month ==11)
		printf("thang %d co 30 ngay\n", month);	
	if(month==2)
	{
		int year;
		printf("Xin nhap nam:");
		scanf("%d", &year);
		if((year%400==0)||(year%4==0&&year%100!=0))
			printf("Thang %d/%d co 29 ngay", month, year);
		else
			printf("Thang %d/%d co 28 ngay", month, year);
	}
	if(month<1||month>12)
		printf("Khong co thang %d", month);
	*/
	
	// Cach 2: Su dung cau lenh re nhanh switch
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: printf("thang %d co 31 ngay\n", month); break;
	case 4:
	case 6:
	case 9:
	case 11: printf("thang %d co 30 ngay\n", month); break;
	case 2:
		{
			int year;
			printf("Xin nhap nam:");
			scanf("%d", &year);
			if((year%400==0)||(year%4==0&&year%100!=0))
				printf("Thang %d/%d co 29 ngay", month, year);
			else
				printf("Thang %d/%d co 28 ngay", month, year);
			break;	
		}
	default: printf("Khong co thang %d", month);
	}
}
