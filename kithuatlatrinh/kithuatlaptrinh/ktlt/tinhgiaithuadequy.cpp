#include <stdio.h>
long long int giaiThua(long long int n)
{
    if (n == 1)
        return 1;
    return n * giaiThua(n - 1);
}
int main()
{
    long long int n;
    scanf("%lli", &n);
    printf("%lli",giaiThua(n));
    return 0;
}
    
