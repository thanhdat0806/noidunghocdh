/*
M?t s? t? nhi�n n du?c g?i l� s? ho�n h?o (perfect number) n?u t?ng c�c u?c s? < n b?ng n.
V� d?: 6 l� m?t s? ho�n h?o v� t?ng c�c u?c s? c?a n� l� 1+2+3 = 6.
H�y vi?t chuong tr�nh t�m & in ra c�c s? ho�n h?o <= 10000.
*/

#include<stdio.h>

int main()
{
    unsigned int n=10000,tonguocso,i,j;

    printf("Cac so hoan hao <= %d la:\n", n);
    
    // X�t c�c s? t? 1 d?n n
    for(i=1; i <= n; i++)
        {
            // V?i m?i s? i, t�nh t?ng c�c u?c s? < i
            tonguocso = 0;
            for(j=1; j <= i/2; j++)
                if(i %j == 0) tonguocso += j;
            // N?u t?ng u?c s? == i -> i l� s? th?a m�n
            if(tonguocso == i) printf("%d\n", i);
        }
}
