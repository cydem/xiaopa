/**********************************************
*	             m��n��������				  *
***********************************************
#include <stdio.h>
int main()
{
	int m,n,i;
	int sum=0;
	int cnt=0;
	
	scanf("%d %d",&m,&n);
	if(m==1) m=2;
	for(i=m;i<=n;i++){
		int isPrime = 1;       // *******
		int k;                 //   ��  *
		for(k=2;k<i-1;k++){    //	��	*				   							   
			if(i%k==0){        //   ��  *
				isPrime = 0;   //   ��  *
				break;         // *******  
			}                
		}
		if(isPrime){
			sum +=i;
			cnt++;
			printf("%d ",i) ;
		}
	}
	printf("%d %d\n",cnt,sum); 
	
	
	return 0;
	
}
***************************************
�ж��Ƿ����������Ƿ��ܱ�0~n-1������ 
***************************************
#include <stdio.h> 
int main() 
{
	int n,i;
	n=10;
	for (i=2;i<= n-1;i++){
		if(n%i==0){            
			printf("%d��������",n);
			break;			
		}else{
			printf("%d������",n);
		}
	}
	return 0;
}
**************************************
��2~n^1/2�ж� 
**************************************
#include <stdio.h>
#include <math.h>                      
int main()
{
	int n,i,k;
	
	printf("����һ������n:\n");
	scanf("%d",&n);
	k=sqrt(n);
	for(i=2;i<=k;i++)
	{
		if(n%i==0)break;
	}if(i<k+1){
		printf("%d��������",n);
	}else{
		printf("%d������",n);
	}	
	return 0;
 } 
 **************************************/
#include <stdio.h>
int main()
{
	int m,n,i,M,N;
	int sum=0;
	int cnt=0;	
	scanf("%d %d",&m,&n);
	for(i=2;i<=2000;i++){
		int isPrime = 1;       // *******
		int k;                 //   ��  *
		for(k=2;k<i-1;k++){    //	��	*				   							   
			if(i%k==0){        //   ��  *
				isPrime = 0;   //   ��  *
				break;         // *******  
			}                
		}
		if(isPrime){
			cnt++;
			if(cnt>=m&&cnt<=n){ 
				sum +=i;		
			}			
			
		}
	}
	printf("%d\n",sum); 
	
	
	return 0;
	
}
					  


















