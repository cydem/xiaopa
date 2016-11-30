 #include <stdio.h>
 int main() {
 	int a,b,i;
 	int n;

 	scanf("%d/%d",&a,&b);
 	printf("0.");
	
 	for(n=0;n<200;n++)
 	{
 		i=a*10/b;
 		a=a*10%b;
		printf("%d",i);
		if(a==0)break;
	} 
	printf("\n");
	return 0;
 }
