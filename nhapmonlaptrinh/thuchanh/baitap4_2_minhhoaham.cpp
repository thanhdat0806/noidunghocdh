/*
Minh h?a cài d?t & s? d?ng hàm. 
Vi?t hàm nh?n vào s? nguyên duong n và th?c hi?n:
a. Tr? v? s? d?o c?a s? dó.
b. Có ph?i là s? d?i x?ng (Tr? v? True/False)
c. Có ph?i là s? chính phuong.
d. Có ph?i là s? nguyên t?.
e. T?ng các ch? s? l?.
f. T?ng các ch? s? nguyên t?.
g. T?ng các ch? s? chính phuong.
*/

#include <stdio.h>
#include <math.h>

//////////////////////////////////////////////////////////////////////
// Khai báo khuôn m?u các hàm
// Hàm tr? v? s? d?o c?a 1 s?
unsigned int SoDao(unsigned int n);
// Hàm ki?m tra n có ph?i s? d?i x?ng
char LaSoDoiXung(unsigned int n);
// Hàm ki?m tra n có ph?i s? chính phuong
char LaSoChinhPhuong(unsigned int n);
// Hàm ki?m tra n có ph?i s? nguyên t? hay không
char LaSNT(unsigned int n); 
// Hàm tr? v? t?ng các ch? s? l? c?a n
unsigned int TongCSLe(unsigned int n); 

// Hàm tr? v? t?ng các ch? s? nguyên t? c?a n
unsigned int TongCSNT(unsigned int n);
//////////////////////////////////////////////////////////////////////
// Chuong trình chính
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
// Hàm tr? v? s? d?o ngu?c c?a n
unsigned int SoDao(unsigned int n)
{
    unsigned int sodao=0;
    char chusocuoi;
    while(n > 0)
    {
        // L?y ra ch? s? cu?i c?a n
        chusocuoi = n % 10;
        // Gi?m n, lo?i b? ch? s? dã xét
        n /= 10;
        sodao = sodao * 10 + chusocuoi;
    }
    return sodao;
}

/* Hàm ki?m tra s? d?i x?ng
N?u s? d?o c?a n == n thì n là s? d?i x?ng.
*/
char LaSoDoiXung(unsigned int n)
{
    /* Cách 1
    if(SoDao(n) == n) return 1;
    else return 0;
    */
   
   // Cách 2
   return SoDao(n) == n;
}

// Hàm ki?m tra n có ph?i s? chính phuong
char LaSoChinhPhuong(unsigned int n)
{
    return (int)sqrt(n) * (int)sqrt(n) == n;
}

// Hàm ki?m tra n có ph?i s? nguyên t? hay không
char LaSNT(unsigned int n)
{   int i;
    if(n < 2) return 0; // S? NT nh? nh?t là 2
    // Xét các s? trong do?n [2, |sqrt(n)|], 
    // N?u có ít nh?t 1 u?c s? c?a n thì n không ph?i SNT
    for(i=2; i <= (int)sqrt(n); i++)
        if(n % i == 0) return 0;
    // n?u không thu?c 2 tru?ng h?p trên -> n là SNT
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

// Hàm tr? v? t?ng ch? s? nguyên t? c?a
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
