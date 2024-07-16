#include <stdio.h>
int T[2000000]={0};
int main(){
	int x,i,n,ti,j;
	float ai;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%f %d",&ai,&ti);
		for(j=1;j<=ti;j++){
			x=ai*(j*1.0);
			T[x]+=1;
		}
	}
	for(i=0;i<2000000;i++){
		if(T[i]%2==1){
			printf("%d",i);
		} 
	}
	return 0;
} 
