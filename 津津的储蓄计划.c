#include <stdio.h>
int main(){
    int c=300,plan,mou,e=0,end,sum=0;
	int cun[12]={0};
	for(mou=0;mou<12;mou++){
		scanf("%d",&plan);
		c=300+e;
		c=c-plan;
		if(c<0){
			c=0;
			e=0;
			cun[mou]=-1;
		}else if(c>=0){
		cun[mou]=c/100;
		e=c%100;
		}
	}
	for(mou=0;mou<12;mou++){
		if(cun[mou]==-1){
		printf("-%d",mou+1);
			break;
		}
		else if(cun[mou]>0){
			sum+=cun[mou]*120;
			end=sum+e;
		}
	}
    if(mou==12){
	printf("%d",end);}
	return 0;
} 
