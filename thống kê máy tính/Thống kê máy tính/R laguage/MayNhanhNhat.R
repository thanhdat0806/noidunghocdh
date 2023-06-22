MNN<-function(MT){
kt<-dim(MT)
sm<-kt[2]
vt<-rep(1,sm)
sh<-kt[1]
for(i in 1:sh) vt=vt*MT[i,]
Xt<-exp(1/sh*log(vt))
for(i in 1:sm) if(Xt[i] == min(Xt))
print(i)}
MNN(MT)