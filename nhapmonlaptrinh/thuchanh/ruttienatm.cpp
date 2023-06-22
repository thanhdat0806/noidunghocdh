/* Mot may ATM co cac loai tien 100 USD, 50USD, 20USD.
gia su may atm co so tien khong han che
mot nguoi can rut so tien m(USD)
hay viet chuong t?nh dieu khien may ATM dua ra so tien
can rut sao cho so tien to tien la it nhat.
vi du: 
input: 320 => output: 3 to 100 uSD va 1 to 20 USD
*/

#include<stdio.h>
int main()
{
	int m;
	int soto50,soto20,soto5;
	int socach=0;
	do
	{
		printf("Nhap so tien can rut:");
		scanf("%d",&m);
		if(m<0)
			printf("So tien rut phai >0 \n");
		else if(m%5!=0)
			printf("So tien rut phai chia het cho 5 \n");	
	}while(m<=0||m%5!=0);
	soto50 = m/50;
	soto20 = m/20;
	soto5=m/5;
	for(int i=0;i<=soto50;i++)
	{
		for(int j=0;j<=soto20;j++)
		{
			for(int k=0;k<=soto5;k++)
			{
				if((50 * i + 20 * j + k * 5) == m)
				{
					printf("so to 50: %d, so to 20: %d,so to 5: %d\n",i,j,k);
				}
			}
		}
	}	
}

