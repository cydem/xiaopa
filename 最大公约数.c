/*********************枚举法**********************
#include <stdio.h>
int main(){
	int a,b;
	int min;
	
	scanf("%d %d",&a,&b);
	if(a<b)
	{
		min = a;
	}else
	{
		min = b;
	}
	int t=0;int i;
	for(i=1;i<min;i++)
	{
		if(a%i==0)
		{
			if(b%i==0)
		    {
				t = i;
			}
		}	
	}
	printf("%d和%d的最大公约数是%d.\n",a,b,t);
	return 0;
}
******************辗转相除法******************* 
1.如果b等于0，计算结束，a就是最大公约数；
2.否则，计算a除以b的余数，让a等于b，而b等于刚才的余数；
3.回到第一步。
a  b  t
12 18 12
18 12 6
12 6  0
6  0  
***********************************************/ 
#include <stdio.h>
int main(){
	int a,b;
	int t;
	scanf("%d %d",&a,&b);
	while(b!=0){
		t = a%b;
		a = b;
		b = t;
	}
	printf("最大公约数为%d\n",a);
	return 0;
}

















