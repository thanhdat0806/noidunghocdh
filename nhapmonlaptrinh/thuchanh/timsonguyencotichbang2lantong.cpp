/*
T�m t?t c? c�c s? nguy�n trong
ph?m vi t? 10 d?n 99 sao cho t�ch c?a 2 ch? s?
b?ng 2 l?n t?ng c?a 2 ch? s? d�.
*/

#include <stdio.h>

int main()
{
    int dem = 0;
    printf("Cac so thoa man dieu kien la:\n");

    //X�t c�c s? nguy�n t? 10 .. 99
    for(int i=10; i <= 99; i++)
    {
        // t�ch ch? s? h�ng don v?, h�ng chuc t? i
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
