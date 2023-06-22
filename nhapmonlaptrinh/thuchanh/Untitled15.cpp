/*T�nh tien di taxi dua vao so  km nhap v�o. Biet:
a. 1 km dayu gi� 15000d
b. Tu km thu 2 den km thu 5 gi� 13500d
c. Tu km thu 6 tro di gi� 11000d
d. Neu tr�n 120km duoc giam 10% tong tien.


input: so km, bang gia
output: so tien phai tra
*/
#include <stdio.h>

int main()
{
	float quangduong, sotien;
	printf("Nhap quang duong di (km):");
	scanf("%f",&quangduong);
	if(quangduong<=0) printf("Quang duong phai >0.\n");
	else
		if(quangduong <= 1)
			sotien=15000;
		else 
			if(quangduong <= 5) sotien=15000+(quangduong-1)*13500;
			else
				if(quangduong<120)	sotien=15000+4*13500+(quangduong-5)*11000;
				else
					sotien=(15000+4*13500+(quangduong-5)*11000)*0.9;
	printf("Quang duong =%fkm, so tien=%fkm", quangduong,sotien);
}
