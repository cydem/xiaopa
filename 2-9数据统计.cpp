/*
输入一些整数，求出它们的最小值、最大值和平均值（保留3位小数）。
输入保证这些数都是不超过1000的整数。
样例输入：
2 8 3 5 1 7 3 6
样例输出：
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
/*         重定向版 
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


