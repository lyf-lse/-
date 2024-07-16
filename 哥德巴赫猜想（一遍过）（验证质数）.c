#include <stdio.h>
int main(){
	int i,x,y,j,m,p,q,n,u;
	scanf("%d",&n);
	for(i=4;i<=n;i++){
		if(i%2==0){
			x=i;
			y=x/2;
			for(j=2;j<=y;j++){
				m=x-j;
				p=yanzheng(j);
				q=yanzheng(m);
				if((p==0)&&(q==0)){
					printf("%d=%d+%d\n",i,j,m);
					break;
				}
			}
		}else{continue;
		}
	}
}



int yanzheng(int u){
	int ans=0,c,i;
	for(i=u-1;i>1;i--){
		c=u%i;
		if(c==0){ans=1;
		}
	}
	return ans;
}
