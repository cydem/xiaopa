/*************************************************
类型名称：int long double
格式化：  %d   %ld  %lf  
范围： char<short<int<float<double 
*************************************************/ 
/*************************************************
 sizeof   指出某个类型或变量在内存中的字节数 
    int a;
	printf("sizeof(char)=%d\n",sizeof(char));     	   1  
	printf("sizeof(short)=%d\n",sizeof(short));	   	   2
	printf("sizeof(int)=%d\n",sizeof(int));            4
	printf("sizeof(long)=%d\n",sizeof(long));          4
	printf("sizeof(long long)=%d\n",sizeof(long long));8		
	int与long取决于cpu的位数，表达了寄存器的大小 				
*************************************************/ 

/*************************************************
  二进制负数
·1个字节（8bit）可表达的数：
00000000 ~~~ 11111111 （0~255）
方案：
1、仿照十进制，有个特殊的标志表示负数    × 
2、取中间数为0                           × 
3、补码（补码加原码得出一个溢出的0）     √ 
	 0      -        1 ——> -1
(1)00000000 - 00000001 ——>11111111
 - a的补码为0 - a，即2^n - a	  
**************************************************
整数的范围
·char:  1字节   -128 ~127
·short: 2字节   -32768~32767
·int:取决于编译器（cpu）通常含义是“1个字”
·long：4个字节			
·long long：8个字节 
**************************************************
			浮点数运算的精度
·带小数点的字面量是double而非float
·float需要用f或F后缀来表明身份   1.315f
·判断两个浮点数是否相等不能使用  f1==f2
	应该用 fabs（f1-f2）<le-l2 
·没有特殊需要直接用double不需要用float 
*************************************************
·char是一种整数，也是一种特殊的类型 ：字符 
	char c;
	char d;
	c = 1;
	d = '1';
	if(c==d){
		printf("c和d相等\n");
	} else{
		printf("c和d不相等\n"); 
	} 
	printf("c=%d\n",c);
	printf("d=%d\n",d);
·如何将'1'这个字符给char c：
	·scanf("%c",&c);--->1
	·scanf("%d",&i);c=i;--->49 
**************************************************
大小写转换
·'a'-'A'可以得到大写字母和小写字母间的排列距离
	·a+'a'-'A'可以把一个大写字母变成小写字母
	·a+'A'-'a'可以把一个小写字母变成大写字母 
*************************************************/ 

#include <stdio.h>
int main()
{
	int i;
	char c;
	
	scanf("%d %c",&i,&c);
	printf("i=%d,c=%d,c='%c'\n",i,c,c);
	
	return 0;
 } 
