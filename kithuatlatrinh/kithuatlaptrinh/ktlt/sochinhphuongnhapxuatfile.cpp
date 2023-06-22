#include<bits/stdc++.h>

using namespace std;

long long dem = 0;
long long a;

void Nhap(){
	FILE *f = fopen("input.txt", "r+");

	while(fscanf(f, "%ld", &a) == 1){
		if(sqrt(a) == long(sqrt(a))){
			dem++;
		}
	}
	fclose(f);
}

void Xuat(){
	FILE *f = fopen("output.txt", "w+");
	fprintf(f, "%d", dem);
	fclose(f);
}

int main(){
	Nhap();
	Xuat();
	return 0;
}
