/*******************************************	
int i,sum;
	
	for(i=1,sum=0;i<=10;i++){
		sum +=i;
	}
	printf("%d到%d的和是%d\n",1,10,sum);
	
	for(i=20,sum=0;i<=30;i++){
	sum +=i;
	}
	printf("%d到%d的和是%d\n",20,30,sum);

	for(i=35,sum=0;i<=45;i++){
		sum +=i;
	}
	printf("%d到%d的和是%d\n",35,45,sum);
********************************************

***************求和函数******************
#include <stdio.h>  
void sum(int begin,int end)     //void为没有返回值的函数，不用return 
{
	int i;
	int sum = 0;
	for ( i=begin;i<=end;i++)
	{
		sum += i;
	}
	printf("%d到%d的和是%d\n",begin,end,sum);
 } 
********************************************
int main()
{
	sum(1,10);
	sum(20,30);
	sum(35,45);
		
	return 0;
}
********************************************/
#include <stdio.h> 

int isPrime(int i); 		//  函数类型声明   

int main()
{
	int m,n,i;
	int sum=0;
	int cnt=0;
	
	scanf("%d %d",&m,&n);
	
	if(m==1) m==2;
	for (i=m;i<=n;i++){
		if(isPrime((1))){
			sum+=i;
			cnt++;
		}
	}
	printf("%d %d\n",cnt,sum);	
	
int isPrime(int i)                 //函数的定义                                          
{                                            
	int ret=1;
	int k;
	for(k=2;k<i-1;k++){
		if(i&k==0){
			ret=0;
			break;
		}
	}
	return ret;	    //停止函数的执行，并返回一个值 
}

	return 0;
}













