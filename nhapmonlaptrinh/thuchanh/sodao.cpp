#include <stdio.h>

int main()
{
    unsigned int n,n1;
    
    // Input
    printf("Nhap n > 0:");
    scanf("%d", &n);
    
    // Vi?t code c?a b?n vào dây d? tính n1
    char chusocuoi;
    n1=0;
    while(n>0)
    {
        chusocuoi = n % 10;
        n /= 10;
        n1= n1 * 10 + chusocuoi;
    }
    
    // Xu?t k?t qu?
    printf("So dao nguoc = %d", n1);
}
