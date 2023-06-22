/*
Vi?t chuong tr�nh t�nh ti?n di?n ph?i tr? d?a v�o s? kWh ti�u th? v� b?ng gi�.
B?ng gi�:
S? kWh <= 100: 2000 d/kWh
T? kWh th? 101 d?n 150: 2500 d/kWh
T? kWh th? 151 tr? di 3000 d/kWh
N?u s? kWh ti�u th? vu?t qu� 300 th� c?ng th�m 10% ti?n ph?i tr?.
Input: S? kWh ti�u th?
Output: S? ti?n ph?i thanh to�n (VND)
*/

#include<stdio.h>
const int GIA1=2000, GIA2=2500, GIA3=3000;
const int MUC1=100, MUC2=150, MUC3=300;

int main()
{
    int sokWh;
    float sotien=0;

    // Nh?p ch? s? di?n ti�u th?
    do
    {
        printf("So kWh tieu thu: ");
        scanf("%d", &sokWh);
        if(sokWh <= 0) printf("So kWh phai > 0");
    } while (sokWh <= 0);
    
    // T�nh ti?n
    if(sokWh <= MUC1) sotien = sokWh * GIA1;
    else // > MUC1
        if(sokWh <= MUC2) sotien = MUC1 * GIA1 + (sokWh - MUC1) * GIA2;
        else // > MUC2
            if(sokWh <= MUC3) sotien = MUC1*GIA1 + (MUC2-MUC1)*GIA2 + (sokWh - MUC2)*GIA3;
            else // > MUC3 
                sotien = (MUC1*GIA1 + (MUC2-MUC1)*GIA2 + (sokWh - MUC2)*GIA3)*1.1;

    // In k?t qu?
    printf("So tien thanh toan: %.2f (VND)\n", sotien);
}
