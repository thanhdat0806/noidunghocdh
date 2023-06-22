/* M?t máy ATM có các lo?i ti?n m?nh giá 100 USD, 20 USD và 1 USD.
Gi? s? máy có s? ti?n không h?n ch?.
M?t ngu?i c?n rút s? ti?n m (USD).
Hãy vi?t chuong trình di?u khi?n máy ATM dua ra s? ti?n c?n rút
sao cho s? t? ti?n ít nh?t.
Ví d?:
Input: 320 -> Output: 3 t? 100 USD và 1 t? 20 USD
Input: 25 -> Output: 1 t? 20 USD và 5 t? 1 USD
*/

#include<stdio.h>

int main()
{
    int m, m1;
    int soto100, soto20, soto1;

    do
    {
        printf("Nhap so tien can rut:");
        scanf("%d", &m);
        if(m <= 0)
            printf("So tien rut phai > 0.\n");
    } while(m <= 0);

    m1 = m; // m1 luu l?i s? ti?n ban d?u

    // Ð? có s? t? ti?n ít nh?t -> uu tiên m?nh giá t? cao xu?ng th?p
    soto100 = m / 100;
    m = m % 100;
    soto20 = m / 20;
    m = m % 20;
    soto1 = m;
    
    // In ra k?t qu?
    printf("So tien rut: %d (USD)\n", m1);
    printf("So to 100: %d\n", soto100);
    printf("So to 20: %d\n", soto20);
    printf("So to 1: %d\n", soto1);
}
