#include <stdio.h>
int main(){
	int m,n,i,kase=0;
	while(scanf("%d%d",&n,&m)!=EOF){
		if(m==0 && n==0)break;
		double sum=0;
		rfor(i=n;i<=m;i++)
			sum+=1.0/i/i;
		printf("Case %d:%.5lf\n",++kase,sum);		
	}
	return 0;
}



