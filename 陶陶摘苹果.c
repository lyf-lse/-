#include <stdio.h>
int main(){
	int a,b,h,count=0,i,j,add=30;
	int app[10];
	for(i=0;i<=9;i++){
		scanf("%d",&app[i]);
	}
	scanf("%d",&h);
	for(j=0;j<=9;j++){
		if(app[j]<=h+add) count++;	
	}
	printf("%d",count);
	return 0;
} 
