/***************末尾不为零的情况**************
#include <stdio.h>

int main()
{
	int x;
	
	scanf("%d", &x);
	int t = 0;
	int d = 0;
//	if(x%=10)
	do{
		d = x%10;
		t =t*10+d;
		x /= 10;	
	}while(x>0);
	x = t;
	do{
		d = x%10;
		printf("%d",d);
		if(x>9){
			printf(" ");
		}
		x /= 10;
	}while(x>0);
	
	return 0;
}********************************************/
/*********************************************
#include <stdio.h>

int main(){
	int mask =10000;
	int x,d;
	x = 70000;
	do
	{
		int d = x / mask;
		printf("%d",d);
		if(mask > 9)
		{
			printf(" ");
		}
		x %= mask;
		mask /= 10;	
	}while(mask>0);
	printf("\n");
	return 0;
} *********************************************/
#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int mask =1;
	int t= x;
	do{  //数x的位数推出对应的mask       
		t/=10;
		mask*=10;	
	}while(t>9);
	printf("mask=%d\n",mask);
	do  //正序取数，每个数赋给d 
	{
		int d=x/mask;
		printf("%d",d);
		if(mask>9)
		{
			printf(" ");
		}
		x%=mask;
		mask/=10;
	//	printf("d=%d,x=%d,mask=%d\n",d,x,mask);
	}while(mask>0);	
	printf("\n");
	return 0;
}
