#include<bits/stdc++.h>
#include <stdio.h>

int check_bosong(int A[]){
int t=0;
if(A[1]==2&&A[2]==3&&A[0]!=1){
printf("Cao co the an thit tho!");
t=1;
}else if(A[2]==3&&A[3]==4&&A[0]!=1){
printf("Tho co the an cai bap!");
t=1;
}else if(A[1]==-2&&A[2]==-3&&A[0]!=-1){
printf("Cao co the an thit tho!");
t=1;
}else if(A[2]==-3&&A[3]==-4&&A[0]!=-1){
printf("Tho co the an cai bap!");
t=1;
}
return t;
}
void swap_vat(int i, int A[], int B[]){
int temp;
temp=A[i];
A[i]=B[i];
B[i]=temp;
}
void swap_nguoi(int A[], int B[]){
int temp;
temp=A[0];
A[0]=B[0];
B[0]=temp;
}
void dichuyen(int i, int A[], int B[]){
swap_nguoi(A,B);
swap_vat(i,A,B);
if(check_bosong(A)==1){
printf("\nGame over!\n");
exit(0);
}
if(A[0]==-1&&A[1]==-2&&A[2]==-3&&A[3]==-4){
printf("\nHoan tat viec chuyen!\n");
printf("\nYou Win!\n");
exit(0);
}
}

int main(){
printf("\t\t-----Nguoi Nong Dan Qua Song-----\n");
int i, A[]={1,2,3,4}, B[]={-1,-2,-3,-4};
int t=0;
while(t>=0){
printf("\n\t0.Nguoi\t1.Cao\t2.Tho\t3.Cai bap\n");
printf("Hay chon so tuong ung voi luot di: ");
scanf("%d",&i);
if(i==0){
swap_nguoi(A,B);
if(check_bosong(A)==1){
printf("\nGame over!\n");
//exit(0);
}
}
else if((A[0]==1&&A[i]>0)||(A[0]==-1&&A[i]<0))
dichuyen(i,A,B);
else{
printf("Chac la ban di sai gi do rui!");
printf("\nChoi lai\n");
}}
}
