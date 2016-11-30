/**********************************************
*	             m和n求素数和				  *
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
		int k;                 //   判  *
		for(k=2;k<i-1;k++){    //	断	*				   							   
			if(i%k==0){        //   素  *
				isPrime = 0;   //   数  *
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
判断是否是素数（是否能被0~n-1整除） 
***************************************
#include <stdio.h> 
int main() 
{
	int n,i;
	n=10;
	for (i=2;i<= n-1;i++){
		if(n%i==0){            
			printf("%d不是质数",n);
			break;			
		}else{
			printf("%d是质数",n);
		}
	}
	return 0;
}
**************************************
用2~n^1/2判断 
**************************************
#include <stdio.h>
#include <math.h>                      
int main()
{
	int n,i,k;
	
	printf("输入一个整数n:\n");
	scanf("%d",&n);
	k=sqrt(n);
	for(i=2;i<=k;i++)
	{
		if(n%i==0)break;
	}if(i<k+1){
		printf("%d不是素数",n);
	}else{
		printf("%d是素数",n);
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
		int k;                 //   判  *
		for(k=2;k<i-1;k++){    //	断	*				   							   
			if(i%k==0){        //   素  *
				isPrime = 0;   //   数  *
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
					  


















