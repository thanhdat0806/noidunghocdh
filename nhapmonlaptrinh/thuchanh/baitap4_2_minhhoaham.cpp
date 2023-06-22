/*
Minh h?a c�i d?t & s? d?ng h�m. 
Vi?t h�m nh?n v�o s? nguy�n duong n v� th?c hi?n:
a. Tr? v? s? d?o c?a s? d�.
b. C� ph?i l� s? d?i x?ng (Tr? v? True/False)
c. C� ph?i l� s? ch�nh phuong.
d. C� ph?i l� s? nguy�n t?.
e. T?ng c�c ch? s? l?.
f. T?ng c�c ch? s? nguy�n t?.
g. T?ng c�c ch? s? ch�nh phuong.
*/

#include <stdio.h>
#include <math.h>

//////////////////////////////////////////////////////////////////////
// Khai b�o khu�n m?u c�c h�m
// H�m tr? v? s? d?o c?a 1 s?
unsigned int SoDao(unsigned int n);
// H�m ki?m tra n c� ph?i s? d?i x?ng
char LaSoDoiXung(unsigned int n);
// H�m ki?m tra n c� ph?i s? ch�nh phuong
char LaSoChinhPhuong(unsigned int n);
// H�m ki?m tra n c� ph?i s? nguy�n t? hay kh�ng
char LaSNT(unsigned int n); 
// H�m tr? v? t?ng c�c ch? s? l? c?a n
unsigned int TongCSLe(unsigned int n); 

// H�m tr? v? t?ng c�c ch? s? nguy�n t? c?a n
unsigned int TongCSNT(unsigned int n);
//////////////////////////////////////////////////////////////////////
// Chuong tr�nh ch�nh
int main()
{
    int n;
    printf("Nhap n > 0: ");
    scanf("%d", &n);

    printf("So dao cua %d la %d\n", n, SoDao(n));

    if(LaSoDoiXung(n))
        printf("%d la so doi xung\n", n);
    else
        printf("%d khong phai so doi xung\n", n);

    if(LaSoChinhPhuong(n))
        printf("%d la so chinh phuong\n", n);
    else
        printf("%d khong phai so chinh phuong\n", n);

    if(LaSNT(n))
        printf("%d la so nguyen to.\n", n);
    else
        printf("%d khong phai so nguyen to\n", n);    

    printf("Tong cac chu so le cua %d = %d\n", n, TongCSLe(n));            
    
    printf("Tong cac chu nguyen to cua %d = %d\n", n, TongCSNT(n));                


}

//////////////////////////////////////////////////////////////////////
// H�m tr? v? s? d?o ngu?c c?a n
unsigned int SoDao(unsigned int n)
{
    unsigned int sodao=0;
    char chusocuoi;
    while(n > 0)
    {
        // L?y ra ch? s? cu?i c?a n
        chusocuoi = n % 10;
        // Gi?m n, lo?i b? ch? s? d� x�t
        n /= 10;
        sodao = sodao * 10 + chusocuoi;
    }
    return sodao;
}

/* H�m ki?m tra s? d?i x?ng
N?u s? d?o c?a n == n th� n l� s? d?i x?ng.
*/
char LaSoDoiXung(unsigned int n)
{
    /* C�ch 1
    if(SoDao(n) == n) return 1;
    else return 0;
    */
   
   // C�ch 2
   return SoDao(n) == n;
}

// H�m ki?m tra n c� ph?i s? ch�nh phuong
char LaSoChinhPhuong(unsigned int n)
{
    return (int)sqrt(n) * (int)sqrt(n) == n;
}

// H�m ki?m tra n c� ph?i s? nguy�n t? hay kh�ng
char LaSNT(unsigned int n)
{   int i;
    if(n < 2) return 0; // S? NT nh? nh?t l� 2
    // X�t c�c s? trong do?n [2, |sqrt(n)|], 
    // N?u c� �t nh?t 1 u?c s? c?a n th� n kh�ng ph?i SNT
    for(i=2; i <= (int)sqrt(n); i++)
        if(n % i == 0) return 0;
    // n?u kh�ng thu?c 2 tru?ng h?p tr�n -> n l� SNT
    return 1;
}

unsigned int TongCSLe(unsigned int n)
{
    unsigned int sum=0;
    unsigned char chusocuoi;
    while(n > 0)
    {
        chusocuoi = n % 10;
        if(chusocuoi % 2 != 0) sum += chusocuoi;
        n /= 10;
    }
    return sum;
}

// H�m tr? v? t?ng ch? s? nguy�n t? c?a
unsigned int TongCSNT(unsigned int n){
	unsigned int sum = 0;
	unsigned char chusocuoi;
	
	while(n > 0){
		chusocuoi = n % 10;
		if(LaSNT(chusocuoi))
			sum += chusocuoi;
		n /= 10;
	}
	return sum;
}
