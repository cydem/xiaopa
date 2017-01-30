#include <stdio.h>
int main() {
	int a,b,c,i,kase=0,run=1;
	do {
		scanf("%d%d%d",&a,&b,&c);
		if(!(a<3&&b<5&&c<7))break;
		for(i=10; i<=100; i++)
			if(i%3==a && i%5==b && i%7==c) {
				run=1;
				printf("Case %d: %d\n",++kase,i);
				break;
			} else run=0;
		if(run=0)printf("Case %d: No answer\n",++kase);
	}while(run==1);
	return 0;
}


