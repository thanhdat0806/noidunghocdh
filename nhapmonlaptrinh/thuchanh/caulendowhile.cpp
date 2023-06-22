/*
Vi?t chuong trình cho phép ngu?i dùng l?p l?i nh?p m?t s? nguyên t? bàn phím 
cho d?n khi nh?p s? 0 thì d?ng và in ra t?ng các s? v?a nh?p.
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
