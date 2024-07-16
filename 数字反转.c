#include <stdio.h>
#include<math.h>
int main(){
	int a[10]={0};
	int i=0,count=0,x,ans,sum,o,end=0;
	scanf("%d",&x);
	if      (x<0)
		{ans=1;x=abs(x); } 
	else if	(x==0)
        {ans=2;}
	else ans=0;
	while(x>0){
		a[i]=x%10;
		x=x/10;
	     i=i+1;
	     count++;
	}
	o=count;
	for(i=0;i<o;i++){
		sum=a[i]*pow(10,count-1);
		end+=sum;
		count-=1;
	}
	if((ans==0)||(ans==2)) printf("%d",end);
	else printf("-%d",end);
	return 0;
}
