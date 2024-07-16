#include<stdio.h>
int main (){
	int n,k,i,x=0,m;
	scanf("%d",&n);
	m=n;
	scanf("%d",&k);
	while(n>=k){
		n=n-k+1;
		x++;
	}
	printf("%d",m+x);
	return 0;
}
