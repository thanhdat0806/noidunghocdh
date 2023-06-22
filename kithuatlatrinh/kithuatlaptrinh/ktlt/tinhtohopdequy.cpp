#include <stdio.h>

int ToHop(int n, int k)
{
	if (k == 0 || k == n)
		return 1;
	return (ToHop(n - 1, k - 1) + ToHop(n - 1, k));
}

int main()
{
	int n, k, KetQua;
	scanf("%d", &n);
	scanf("%d", &k);
	KetQua = ToHop(n,k);
	printf("%d", KetQua);
	return 0;
}
    
