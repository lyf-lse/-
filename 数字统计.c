#include <stdio.h>
int main(){
	int l,r,x,y,i,z,count=0;
	scanf("%d %d",&l,&r);
	for(i=l;i<=r;i++){ 
	        z=i;
		do{
			x=z%10;
			y=z/10;
			z=y;
			if(x==2){
				count++;
			}
		}while((x!=0)||(y!=0));
	}
	printf("%d",count);
	return 0;
} 
