/*
Tìm t?t c? các s? nguyên trong
ph?m vi t? 10 d?n 99 sao cho tích c?a 2 ch? s?
b?ng 2 l?n t?ng c?a 2 ch? s? dó.
*/

#include <stdio.h>

int main()
{
    int dem = 0;
    printf("Cac so thoa man dieu kien la:\n");

    //Xét các s? nguyên t? 10 .. 99
    for(int i=10; i <= 99; i++)
    {
        // tách ch? s? hàng don v?, hàng chuc t? i
        unsigned char donvi = i % 10;
        unsigned char chuc = i / 10;
        if(donvi * chuc == 2 * (donvi + chuc))
        {
            printf("%d \n", i);
            dem ++;
        }
    }
    printf("Co %d so thoa man dieu kien.\n", dem);
}
