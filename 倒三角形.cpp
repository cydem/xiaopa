#include <stdio.h>
int main(){
	int n,i,j,k;
	while(scanf("%d",&n)!=EOF)
	if( n>0 && n<=20){
		for(i=1;i<=n;i++){			//���n�� 
		for(j=1;j<i;j++)			//ÿ��i-1���ո� 
		printf(" ");
		for(k=i;k<=2*n-i;k++)	//ÿ��2*(n-i)+1��# 
		printf("#");		
		printf("\n");	
		}		
	}
	return 0;
}




