/*
M?t s? t? nhiên n du?c g?i là s? hoàn h?o (perfect number) n?u t?ng các u?c s? < n b?ng n.
Ví d?: 6 là m?t s? hoàn h?o vì t?ng các u?c s? c?a nó là 1+2+3 = 6.
Hãy vi?t chuong trình tìm & in ra các s? hoàn h?o <= 10000.
*/

#include<stdio.h>

int main()
{
    unsigned int n=10000,tonguocso,i,j;

    printf("Cac so hoan hao <= %d la:\n", n);
    
    // Xét các s? t? 1 d?n n
    for(i=1; i <= n; i++)
        {
            // V?i m?i s? i, tính t?ng các u?c s? < i
            tonguocso = 0;
            for(j=1; j <= i/2; j++)
                if(i %j == 0) tonguocso += j;
            // N?u t?ng u?c s? == i -> i là s? th?a mãn
            if(tonguocso == i) printf("%d\n", i);
        }
}
