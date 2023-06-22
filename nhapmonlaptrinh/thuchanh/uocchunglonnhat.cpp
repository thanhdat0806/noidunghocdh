/*
T�m u?c s? chung l?n nh?t c?a 2 s? nguy�n duong a,b.
Input: a, b > 0
Output: u?c s? chung l?n nh?t c?a a v� b.
*/

#include<stdio.h>

int main()
{
    unsigned int a,b;
    unsigned int a0,b0; // �? luu l?i gi� tr? ban d?u c?a a,b

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
