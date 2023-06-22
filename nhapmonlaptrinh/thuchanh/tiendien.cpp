#include <stdio.h>

int main(){
 int soDien, tienDien;
 printf("Nhap vao so dien cua ban (kWh): ");
 scanf("%d",&soDien);
 if(soDien<0){
 printf("\nVui long nhap lai So Dien\nSo dien khong duoc nho hon 0\n");
 }
 else if(soDien<=100){
  tienDien=soDien*2000;
  printf("\nban da dung %d kWh so tien ban phai tra la: %d\n VND",soDien, tienDien);
 }
 else if(soDien<=150){
  tienDien=(100*2000)+((soDien-100)*2500);
  printf("\nban da dung dien %d kWh so tien ban phai tra la: %d\n VND",soDien, tienDien);
 }
 else if(soDien>151){
  tienDien=(100*2000)+(50*2500)+((soDien-150)*3000);
  printf("\nban da dung dien %d kWh so tien ban phai tra la: %d\n",soDien, tienDien);
 }
 return 0;
}
