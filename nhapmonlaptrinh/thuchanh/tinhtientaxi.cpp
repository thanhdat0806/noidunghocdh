/*
Tính ti?n taxi d?a vào quãng du?ng di và b?ng giá.
B?ng giá:
<= 1 km dau: 15000 d
T? km th? 2 d?n km th? 5: 13500 d/km
T? km th? 6 tr? di: 11000 d/km
N?u vu?t 120 km du?c gi?m 10% t?ng ti?n.
* Input: 
- S? km (nh?p t? bàn phím)
- B?ng giá
* Output: S? ti?n ph?i thanh toán.
*/

#include <stdio.h>

int main()
{
	float sokm, sotien=0;
	
	printf("Nhap quang duong di (km):");
	scanf("%f", &sokm);
	
	if(sokm <= 0)	printf("Quang duong phai > 0.\n");
	else
		if(sokm <= 1)	sotien = 15000;
		else
			// <-> (sokm > 1 && sokm <= 5)
			if(sokm <= 5)	sotien = 15000 + (sokm - 1) * 13500;
			else
				// <-> (sokm > 5 && sokm <= 120)
				if(sokm <= 120) 
					sotien = 15000 + 4 * 13500 + (sokm - 5) * 11000;
				else
					// <-> (sokm > 120)
					sotien = (15000 + 4 * 13500 + (sokm - 5) * 11000) * 0.9;
				
	printf("\n--------------------------------\n");
	printf("Quang duong:\t%10.2f (km)\nSo tien:\t%10.2f (d)\n", sokm, sotien);
}
