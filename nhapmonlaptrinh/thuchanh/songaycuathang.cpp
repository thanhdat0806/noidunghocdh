/*
Nh?p m?t th�ng duong l?ch, in ra s? ng�y c?a th�ng d�.
Input: th�ng trong nam (1..12), nam (khi th�ng == 2)
Output: s? ng�y c?a th�ng.
Bi?t: Trong 1 nam duong l?ch:
- Th�ng 1,3,5,7,8,10,12 c� 31 ng�y.
- Th�ng 4,6,9,11 c� 30 ng�y.
- Th�ng 2: nam nhu?n c� 29 ng�y, nam kh�ng nhu?n c� 28 ng�y.
(Nam nhu?n l� nam th?a m�n 1 trong 2 di?u ki?n:
+ Chia h?t cho 400
+ Chia h?t cho 4 v� kh�ng chia h?t 100
)
*/

#include <stdio.h>

int main()
{
    unsigned char month;

    printf("Nhap mot thang duong lich:");
    scanf("%d", &month);

    /* C�ch 1 - S? d?ng l?nh r? nh�nh if
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        printf("Thang %d co 31 ngay\n", month);
    if(month == 4 || month == 6 || month == 9 || month == 11)
        printf("Thang %d co 30 ngay\n", month);
    
    if(month == 2)
    {
        int year;
        printf("Xin nhap nam:");
        scanf("%d", &year);
        if((year % 400 == 0) || (year % 4 == 0 && year % 100 !=0)) // -> nam nhuan
            printf("Thang %d/%d co 29 ngay", month, year);
        else
            printf("Thang %d/%d co 28 ngay", month, year);
    }
    if(month < 1 || month > 12)
        printf("Khong co thang %d", month);
    */

   // C�ch 2 - S? d?ng c�u l?nh r? nh�nh switch
   switch (month)
   {
   case 1:
   case 3:
   case 5:
   case 7:
   case 8:
   case 10:
   case 12: printf("Thang %d co 31 ngay\n", month); break;
   case 4:
   case 6:
   case 9:
   case 11: printf("Thang %d co 30 ngay\n", month); break;
   case 2:
        {
            int year;
            printf("Xin nhap nam:");
            scanf("%d", &year);
            if((year % 400 == 0) || (year % 4 == 0 && year % 100 !=0)) // -> nam nhuan
                printf("Thang %d/%d co 29 ngay", month, year);
            else
                printf("Thang %d/%d co 28 ngay", month, year);
            break;
        }
   default:  printf("Khong co thang %d", month); 
   }
}
