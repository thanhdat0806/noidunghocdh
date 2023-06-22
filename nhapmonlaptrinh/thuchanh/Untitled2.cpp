#include <stdio.h>
int main()
{
	int n =100;
	int i=1;
	LOOP:
		printf("%d ",i);
		i+=1;
	if(i<n) goto LOOP;
}
