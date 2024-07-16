#include <stdio.h>
int main(){	
    int i,n,x,y,j;
    int all[1000],sta[1000],con[1000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&all[i]);
	}
	for(i=0;i<n-1;i++){
		sta[i]=i+1;
	}
	for(i=1;i<n;i++){
		x=all[i]-all[i-1];
		y=abs(x);
		for(j=0;j<n-1;j++){
			if(y==sta[j]){
				con[j]=con[j]+1;break;
			}
		}
	}
	for(i=0;i<n-1;i++){
		if(con[i]==1){continue;
		}
		if(con[i]!=1){printf("Not jolly");break;
		}
	}
	if(i==n-1){printf("Jolly");
	}
} 
