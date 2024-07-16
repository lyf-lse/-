#include <stdio.h>
int main (){
   int k,count;
   double sum=0.0,b=0.0;
   scanf("%d",&k);
   for(count=1;sum<=k;count++){
   	b=1.0/count;
   	sum+=b;}
	printf("%d",count-1);
return 0;
}
