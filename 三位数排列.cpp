#include <stdio.h> 

int main(){
	int a,b,c;
	int num[10]={0};//用一个1维数组记录9个数的使用情况 
	for(a=123;a<=329;a++){
		b=2*a;
		c=3*a;
		num[a/100]=num[a/10%10]=num[a%10]=1;
		num[b/100]=num[b/10%10]=num[b%10]=1;
		num[c/100]=num[c/10%10]=num[c%10]=1;
		int i,sum = 0;
		for(i=1;i<10;i++)
			sum+=num[i];
		if(sum==9)
		printf("%d %d %d\n",a,b,c);	
		for(i=1;i<10;i++)
			num[i]=0;
	}	
	return 0;
} 
