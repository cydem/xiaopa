/*******************************************	
int i,sum;
	
	for(i=1,sum=0;i<=10;i++){
		sum +=i;
	}
	printf("%d��%d�ĺ���%d\n",1,10,sum);
	
	for(i=20,sum=0;i<=30;i++){
	sum +=i;
	}
	printf("%d��%d�ĺ���%d\n",20,30,sum);

	for(i=35,sum=0;i<=45;i++){
		sum +=i;
	}
	printf("%d��%d�ĺ���%d\n",35,45,sum);
********************************************

***************��ͺ���******************
#include <stdio.h>  
void sum(int begin,int end)     //voidΪû�з���ֵ�ĺ���������return 
{
	int i;
	int sum = 0;
	for ( i=begin;i<=end;i++)
	{
		sum += i;
	}
	printf("%d��%d�ĺ���%d\n",begin,end,sum);
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

int isPrime(int i); 		//  ������������   

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
	
int isPrime(int i)                 //�����Ķ���                                          
{                                            
	int ret=1;
	int k;
	for(k=2;k<i-1;k++){
		if(i&k==0){
			ret=0;
			break;
		}
	}
	return ret;	    //ֹͣ������ִ�У�������һ��ֵ 
}

	return 0;
}













