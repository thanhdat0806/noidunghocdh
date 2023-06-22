#include<stdio.h>

const int HSNHAN = 2;   // T?c d? nhân b?n

int main()
{
    // Vi?t chuong trình c?a b?n vào dây
    int sovtbandau, sogio;
    long tongsovt=0;
    //Input
    printf("Nhap so vi trung ban dau:");
    scanf("%d",&sovtbandau);
    printf("Nhap so gio:");
    scanf("%d",&sogio);
    //xu ly
    for(int i=0 ;i<sogio ;i++)
    {
        tongsovt = sovtbandau*HSNHAN;
        sovtbandau=tongsovt;
    }
    //xuat ket qua
    printf("Tong so vi trung= %d", tongsovt);
}
