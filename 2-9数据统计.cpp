/*
����һЩ������������ǵ���Сֵ�����ֵ��ƽ��ֵ������3λС������
���뱣֤��Щ�����ǲ�����1000��������
�������룺
2 8 3 5 1 7 3 6
���������
1 8 4.375
*/
/*
#include <stdio.h>
int main() {
	int x,n=0,min,max,s=0;
	while(scanf("%d",&x)==1) {
		s+=x;
		if(x<min)min=x;
		if(x>max)max=x;
		n++;
	}
	printf("%d %d %.3f\n",min,max,double(s)/n);



	return 0;
}
*/
/*         �ض���� 
#define LOCAL
#include<stdio.h>
#define INF 1000000000
int main() {
#ifdef LOCAL
	freopen("data.in", "r", stdin);
	freopen("data.out", "w", stdout);
#endif
	int x, n = 0, min = INF, max = -INF, s = 0;
	while(scanf("%d", &x) == 1) {
		s += x;
		if(x < min) min = x;
		if(x > max) max = x;
		/*
		printf("x = %d, min = %d, max = %d\n", x, min, max);
		*
		n++;
	}
	printf("%d %d %.3f\n", min, max, (double)s/n);
	return 0;
}
*/


