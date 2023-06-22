#include<bits/stdc++.h>
using namespace std;

int s, h;
string kq = "";

void Nhap(){
	fstream f;
	f.open("input.txt", ios::in);

	while(f >> h >> s){
		if(kq != "" && h>0){
			kq += "+";
		}
		
		if(h == 1){
			kq += "";
		}
		else if(h == -1){
			kq += "-";
		}
		else{
			ostringstream convert;
			convert << h;
			kq += convert.str();
		}
		
		if(s == 1){
			kq += "x";
		}
		else if(s == 0){
			if(h==1 || h==-1){
				h = abs(h);
				ostringstream convert;
				convert << h;
				kq += convert.str();
			}
			else{
				kq += "";
			}
		}
		else{
			ostringstream convert;
			convert << s;
			kq += "x^" + convert.str();
		}
	}
	cout << kq;
	f.close();
}

void Xuat(){
	fstream f;
	f.open("output.txt", ios::out);
	f << kq;
	f.close();
}

int main(){
	Nhap();
	Xuat();
	return 0;
}
