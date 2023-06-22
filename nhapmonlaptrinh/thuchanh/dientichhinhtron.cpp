/*
C?u trúc co b?n c?a m?t chuong trình C
Minh h?a qua ví d? tính di?n tích hình tròn.
*/

// Khai báo các thu vi?n
#include <stdio.h>        

// Khai báo các h?ng, bi?n toàn c?c (global)
const float PI=3.1416;  

// Khai báo khuôn m?u hàm (prototype)
float DienTichHinhTron(float); 

/*---------------------------------------------------------------------------*/

// Chuong trình chính
int main() 
{
    // Khai báo bi?n c?c b? (local)
    float banKinh, dienTich=0; 

    // Các l?nh
    printf("Nhap ban kinh hinh tron = ");   // L?nh xu?t
    scanf("%f", &banKinh);					// L?nh nh?p
    
    if(banKinh > 0)                         // C?u trúc di?u khi?n
    {
        dienTich = DienTichHinhTron(banKinh); // L?i g?i hàm
        printf("Dien tich hinh tron = %f\n", dienTich);
    }
    else
        printf("Ban kinh hinh tron phai > 0");
    
    return 0;   // K?t thúc chuong trình
}

/*---------------------------------------------------------------------------*/

// Cài d?t hàm t? d?nh nghia
float DienTichHinhTron(float r)
{
    if(r > 0) return r*r*PI;
}
