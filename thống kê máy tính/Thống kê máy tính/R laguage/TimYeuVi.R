# Xay dung ham tim phan tu yeu vi
#1. Xay dung ham dem gia tri x xuat hien bao nhieu lan
demts<-function(x,y){
so<-0
for(i in 1:length(y)) {if (x==y[i]) 
so<-so+1}
return (so)
}
#2 Xay dung ham Mode
Mode <- function(x){
kq<-unique(x)
tam <- rep(1,length(kq))
for (i in 1:length(kq)) 
tam[i] = demts(kq[i],x)
if (min(tam)!=max(tam))
 for(i in 1:length(kq))
  if(tam[i] == max(tam)) 
   print(kq[i])}
Mode(x)