#include <iostream>
#include <cstring>

using namespace std;
struct PhanSo
{
	int TuSo;
	int MauSo;
};

void ToiGian(PhanSo &a)
{
	int ts = a.TuSo;
	int ms = a.MauSo;
	while (ts != ms)
	{
		if (ts>ms) ts -= ms;
		else ms -= ts;
	}
	a.TuSo /= ts;
	a.MauSo /= ms;
}

int  main(){
 
	PhanSo a;
	a.TuSo = 2;
	a.MauSo = 8;
	
	cout<<a.TuSo<<"/"<<a.MauSo<<"\n"; 	 	
	ToiGian(a);
	cout<<a.TuSo<<"/"<<a.MauSo<<"\n"; 	 	
 	
	return 0;
}
    
