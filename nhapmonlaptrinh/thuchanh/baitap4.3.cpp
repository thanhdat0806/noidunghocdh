/* Viet cac ham nhap vao so nguyn duong n va tra ve :
c. S=1+1/2+...+1/n
e. S=1!+2!+..+n!
*/

#include <stdio.h>
#include <math.h>
//khai bao khuon mau ham tra ve tong nghich dao cac so tu 1...n
// Cach1 - De quy
float TongNghichDao_DQ(unsigned int n);
// Cach2 - khong De quy
float TongNghichDao(unsigned int n);
///////////////////////////////
int main()
{
	int n=3;
	printf("tong nghich dao tu 1..%d la %f\n",n,TongNghichDao_DQ(n));
	printf("tong nghich dao khong de quy tu 1..%d la %f\n",n,TongNghichDao(n));
	printf("tong giai thua tu 1..%d la %d\n",n,TongGiaiThua(n));
}
float TongNghichDao_DQ(unsigned int n){
	if(n==0) return 0;
	return 1.0/n + TongNghichDao_DQ(n-1);
}
//khong de quy
float TongNghichDao(unsigned int n){
	float s=0;
	int i;
	for(i=1;i<= n;i++)
		s+=1.0/i;
	return s;
}
int TongGiaiThua(int n){
	int S=0;
	int P=1;
	for(int i=1;i<=n;i++)
		{
			P=P*i;
			S=S+P;
		}
	return S;
}
