/*
Vi?t c�c h�m nh?n v�o s? nguy�n duong n v� tr? v? g�a tr? c�c bi?u th?c sau:
a) S = 1 + 1/2 + � + 1/n
b) S = 1! + 2! + � + n!
*/

#include <stdio.h>
#include <math.h>

// Khai b�o khu�n m?u h�m tr? v? t?ng ngh?ch d?o c�c s? nguy�n t? 1..n
// C�ch 1 - D�ng v�ng l?p
float TongNghichDao(unsigned int n);
// C�ch 2 - �? quy
float TongNghichDao_DQ(unsigned int n);

////////////////////////////////////////////////////////////////////////////////////
// Main program
int main()
{
    int n=3;
    printf("Tong nghich dao tu 1..%d la %f\n", n, TongNghichDao_DQ(n));
    printf("Tong nghich dao tu 1..%d (khong de quy) la %f\n", n, TongNghichDao(n));
}

////////////////////////////////////////////////////////////////////////////////////
float TongNghichDao_DQ(unsigned int n)
{
    if(n == 0) return 0;
    return 1.0/n + TongNghichDao_DQ(n-1);
}

float TongNghichDao(unsigned int n)
{
    float s=0;
    int i;
    for(i=1; i <= n; i++)
        s += 1.0/i;
    return s;
}
