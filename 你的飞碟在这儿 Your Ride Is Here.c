#include <stdio.h>
#include<string.h>
int main(){
	char xiaozu[7],huixing[7];
	int xiao[7],hui[7];
	int i,sum1=1,sum2=1,x,y,j,m,n,o,p;
	gets(xiaozu);
	gets(huixing);
	m=strlen(xiaozu);
	n=strlen(huixing);
	for(i=0;i<m;i++){
		xiao[i]=xiaozu[i]-'A'+1;
		sum1*=xiao[i];
	}
	for(i=0;i<n;i++){
		hui[i]=huixing[i]-'A'+1;
		sum2*=hui[i];
	}
	x=sum1%47;
	y=sum2%47;
	if(x==y)printf("GO");
	else printf("STAY");
	return 0;
} 

//gets获取字符串，也可以设字符串组读入 
//strlen函数可以对数量进行统计，并且不受换行符影响。 


/*在洛谷上，开启O2优化会导致1WA，不开可以过。
将7换成6，开启优化会1，7WA，不开1，10，WA。*/
 
