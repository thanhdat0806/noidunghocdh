#include <stdio.h>
 
int main(){
	int n, i, a = 0;
	scanf("%d", &n);
	while( n > 0 ){
		i = n % 10;
		a += i;
		n /= 10;
	}
	if (a % 10 == 9){ printf("YES"); }else{ printf("NO"); }
	return 0;
}
