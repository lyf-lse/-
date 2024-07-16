#include <stdio.h>
int main(){
	int n,ba=1,aa,i,count=0;
	int s[10000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	for(i=1;i<n-2;i++){
		if(s[i]>s[i+1]){
			aa=2;
		}else if(s[i]<s[i+1]){
		    aa=1; 
		}else {aa=0;
		}
		if(ba==1){if(aa==2){
			ba=aa;
		}else  {continue;}
		}else
		{if(aa==1){count++;ba=aa;
		}else{continue;}
		}
	}
printf("%d",count);
return 0;
} 
