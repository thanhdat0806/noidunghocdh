# Dem so cot amng gia tri thieu
scNA <- function(BA){
kt<-dim(BA)
sc<-kt[2]
dem = 0
for (i in 1:sc){
if (TRUE %in% is.na(BA[,i])) dem=dem+1}
return (dem)}
# Hien thi so luong cot thieu
scNA(BA)
# hien thi so luong hang mang gia tri thieu
shNA<-function(BA){
kt<-dim(BA)
sh<-kt[1]
dem=0
for (i in 1:sh){
if (TRUE %in% is.na(BA[i,])) dem=dem+1}
return (dem)}
shNA(BA)