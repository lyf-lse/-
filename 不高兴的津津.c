#include <stdio.h>
int main(){
	int i,u,v,x=0,h;
	int he[7]={0};
	for(i=0;i<=6;i++){
		scanf("%d%d",&u,&v);
		he[i]=u+v;
	}
	for(i=0;i<=6;i++){
		if(he[i]>he[x]){
			x=i;
		}
	}
	if(he[x]<=8){
		h=0;
	}else {h=x+1;}
	printf("%d",h);
	return 0;
} 
