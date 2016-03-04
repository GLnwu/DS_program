/*************************************************************************
    > File Name: test.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年03月04日 星期五 14时25分18秒
 ************************************************************************/
/* 实现迭代方法的数组元素的逆置 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
void reverse(char  * A,int lo,int hi);
char * s_gets(char * st,int n);

int main(void)
{
	char	 string[MAX];

	if(s_gets(string,MAX) == NULL)
	{
		fprintf(stderr,"Can't enter characters:\n");
		exit(EXIT_FAILURE);
	}
	printf("The string before reverse() %s\n",string);
	reverse(string,0,(int)strlen(string)-1);	//减1避免将结束字符串'\0'也逆置
	printf("The string after reverse() %s\n",string);

	return 0;
}


void reverse(char * A,int lo,int hi)
{
	static char temp;

	if(lo < hi)
	{
		temp 	= A[hi];
		A[hi] 	= A[lo];
		A[lo]   = temp;
		reverse(A,lo+1,hi-1);
	}
}
char * s_gets(char * st,int n)
{
	char * ret_val;			//将要返回的字符指针
	char * find;

	ret_val = fgets(st,n,stdin);	//fgets return string pointer on success
	if(ret_val)			//如果非空，则证明，从标准输入中没有获得字符串，反之则成功
	{
		find = strchr(st,'\n');
		if(find)		//找到就返回查找到俄指针，否则返回空指针
			*find = '\0';	//在换行符的位置换上一个空字符'\0'
		else
			while(getchar() != '\n')	//有可能在stdin stream里的字符大于n-1，因此导致fgets函数可能读取n-1个以后，还有剩下的字符留在stdin,
				continue;		//因此用getchar函数，将stdin中缓冲的字符都消耗掉
	}
	return ret_val;
	/* fegts函数以后的代码，用来去掉st指针指向的字符串中的换行符 */
}
