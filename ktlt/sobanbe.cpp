#include <stdio.h>
 
int count(int n){
	int k = 0, i;
	for (i = 1; i <= n / 2; i++){
		if (n % i == 0){ k += i;}
	}
	return k;
}
 
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if ((count(a) == b) && (count(b) == a)){ printf("YES"); }else{ printf("NO"); }
	return 0;
}
