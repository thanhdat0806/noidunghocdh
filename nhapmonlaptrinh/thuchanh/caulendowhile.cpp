/*
Vi?t chuong tr�nh cho ph�p ngu?i d�ng l?p l?i nh?p m?t s? nguy�n t? b�n ph�m 
cho d?n khi nh?p s? 0 th� d?ng v� in ra t?ng c�c s? v?a nh?p.
*/

#include<stdio.h>

int main()
{
    int n, sum=0;

    do{
        printf("Nhap mot so nguyen (nhap 0 de dung):");
        scanf("%d", &n);
        sum += n;
    }while(n != 0);

    printf("Tong cac so vua nhap = %d\n", sum);
}
