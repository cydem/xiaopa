/*********************ö�ٷ�**********************
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
	printf("%d��%d�����Լ����%d.\n",a,b,t);
	return 0;
}
******************շת�����******************* 
1.���b����0�����������a�������Լ����
2.���򣬼���a����b����������a����b����b���ڸղŵ�������
3.�ص���һ����
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
	printf("���Լ��Ϊ%d\n",a);
	return 0;
}

















