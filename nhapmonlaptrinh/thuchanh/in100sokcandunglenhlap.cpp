#include <stdio.h>
int main()
{
	int n =100;
	/* khong dung cau lenh lap
	int i=1;
	
	LOOP:
		printf("%d ",i);
		i+=1;
	if(i<n) goto LOOP;
	*/
	// dung cau lenh lap for
	for(int i=1;i<=n;i+=1)
		printf("%d ",i);
}
