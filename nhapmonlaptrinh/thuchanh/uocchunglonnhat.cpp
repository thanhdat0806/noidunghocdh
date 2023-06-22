/*
Tìm u?c s? chung l?n nh?t c?a 2 s? nguyên duong a,b.
Input: a, b > 0
Output: u?c s? chung l?n nh?t c?a a và b.
*/

#include<stdio.h>

int main()
{
    unsigned int a,b;
    unsigned int a0,b0; // Ð? luu l?i giá tr? ban d?u c?a a,b

    do{
        printf("a = ");
        scanf("%d", &a);
    }while(a <= 0);
    a0 = a;

    do{
        printf("b = ");
        scanf("%d", &b);
    }while(b <= 0);
    b0 = b;

    while(a != b)
        if(a > b) a -= b;
        else b -= a;
    
    printf("USCLN(%d, %d) = %d\n", a0,b0,a);
}
