/**************************************************************************************
*输入2个字符串S1和S2，要求删除字符串S1中出现的所有子串S2，即结果字符串中不能包含S2。
*  	输入格式：
*  	输入在2行中分别给出不超过80个字符长度的、以回车结束的2个非空字符串，对应S1和S2。
*     Tomcat is a male ccatat
*     cat
*		输出格式：
*   在一行中输出删除字符串S1中出现的所有子串S2后的结果字符串。
*			Tom is a male	
***************************************************************************************/
/——————————————————————————————————————法1————————————————————————————————————————————/
#include <stdio.h>
#include <string.h>
#define N 80

void del_str(char *str, char *s, char *resultstr)   //删除函数
{
	int i,str_len,s_len,r_len;
	strcpy(resultstr,str);
	char *p;
	s_len = strlen(s);
	r_len = strlen(resultstr);
	while((p=strstr(resultstr,s)) != NULL){
		for( i = p - resultstr; i <= r_len - s_len;i++ )	//字符串左移 
			resultstr[i] = resultstr[i+s_len];
		r_len = strlen(resultstr);	
	}	
}

int main(){
	char s1[N+1],s2[N+1],s3[N+1];
	gets(s1);
	gets(s2);
	del_str(s1,s2,s3);
	printf("%s",s3);
	return 0;
}
