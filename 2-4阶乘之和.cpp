/*      �׳�֮�� 
*����n������S��1����2����3��������n����ĩ6λ������ǰ��0����
*n��106��n����ʾǰn��������֮����
*�������룺
*  10
*���������
* 37913
*/ 
#include<stdio.h>
#include<time.h> 
int main()
{
	const int mod=1000000;
	int n, S = 0;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		int factorial = 1;
		for(int j = 1; j <= i; j++)
			factorial = (factorial * j % mod);
		S = (factorial + S) % mod ;
	}
	printf("%d\n", S);
	printf("Time used=%.2f\n",(double)clock()/CLOCKS_PER_SEC); 
	return 0;
}
