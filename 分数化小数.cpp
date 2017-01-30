#include <stdio.h>

int main(){
	int a,b,c,kase=0;
	double f;
	while(scanf("%d%d%d",&a,&b,&c)!=EOF){
		if(a==0 && b==0 && c==0) break;
		if(a<0 || b<0 || c <0 || b>1e6 || c>100)
		printf("Input error!");
		else{
			f=1.0*a/b;
			printf("Case %d:%.*lf\n",++kase,c,f);  //用c控制小数的位数 
		}
	}
	return 0;
}
