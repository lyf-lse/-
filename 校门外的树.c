#include <stdio.h>
int main(){
	int road[10000]={0};
	int m,u,v,i,j,k,count=0,n;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		road[i]=1;
	}
	scanf("%d",&m);
	for(j=0;j<m;j++){
		scanf("%d%d",&u,&v);
		for(k=u;k<=v;k++){
			road[k]=0;
		}
	}
	for(i=0;i<=n;i++){
		if(road[i]==1) {count++;}
	}
	printf("%d",count);
	return 0;
} 
