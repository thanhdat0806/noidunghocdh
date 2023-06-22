/*
C?u tr�c co b?n c?a m?t chuong tr�nh C
Minh h?a qua v� d? t�nh di?n t�ch h�nh tr�n.
*/

// Khai b�o c�c thu vi?n
#include <stdio.h>        

// Khai b�o c�c h?ng, bi?n to�n c?c (global)
const float PI=3.1416;  

// Khai b�o khu�n m?u h�m (prototype)
float DienTichHinhTron(float); 

/*---------------------------------------------------------------------------*/

// Chuong tr�nh ch�nh
int main() 
{
    // Khai b�o bi?n c?c b? (local)
    float banKinh, dienTich=0; 

    // C�c l?nh
    printf("Nhap ban kinh hinh tron = ");   // L?nh xu?t
    scanf("%f", &banKinh);					// L?nh nh?p
    
    if(banKinh > 0)                         // C?u tr�c di?u khi?n
    {
        dienTich = DienTichHinhTron(banKinh); // L?i g?i h�m
        printf("Dien tich hinh tron = %f\n", dienTich);
    }
    else
        printf("Ban kinh hinh tron phai > 0");
    
    return 0;   // K?t th�c chuong tr�nh
}

/*---------------------------------------------------------------------------*/

// C�i d?t h�m t? d?nh nghia
float DienTichHinhTron(float r)
{
    if(r > 0) return r*r*PI;
}
