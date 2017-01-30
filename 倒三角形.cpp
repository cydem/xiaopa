#include <stdio.h>
int main(){
	int n,i,j,k;
	while(scanf("%d",&n)!=EOF)
	if( n>0 && n<=20){
		for(i=1;i<=n;i++){			//输出n行 
		for(j=1;j<i;j++)			//每行i-1个空格 
		printf(" ");
		for(k=i;k<=2*n-i;k++)	//每行2*(n-i)+1个# 
		printf("#");		
		printf("\n");	
		}		
	}
	return 0;
}




