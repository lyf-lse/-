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

//gets��ȡ�ַ�����Ҳ�������ַ�������� 
//strlen�������Զ���������ͳ�ƣ����Ҳ��ܻ��з�Ӱ�졣 


/*������ϣ�����O2�Ż��ᵼ��1WA���������Թ���
��7����6�������Ż���1��7WA������1��10��WA��*/
 
