#include <stdio.h>
#include <math.h>
int main()
{	
	int num,l,r;
	int n = 0;
	double n10=0;
	scanf("%d",&num);
	if(num>=0&&num<=1000000)
	{  	
		l=num,r=num;
		do{
			r =l%10;
			l =l/10;
			n++;
			if(n%2==r%2)
			{
			n10+=pow(2,n-1) ;
			}
		}while(l!=0);		
	}
	int N = (int)(n10); 
	printf("%d\n",N);		
	return 0;
} 
