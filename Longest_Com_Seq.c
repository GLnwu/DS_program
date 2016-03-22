/*************************************************************************
    > File Name: Longest_Com_Seq.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Tue 22 Mar 2016 11:11:42 AM CST
 ************************************************************************/
/* 找到两个字符序列的最大公共子序列 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100


int LCS(char *,char *,int a_len,int b_len);

int main(void)
{
	char 	ch_a[MAX];
	char	ch_b[MAX];
	int 	length;

	scanf("%s",ch_a);
	scanf("%s",ch_b);
	length = LCS(ch_a,ch_b,(int)strlen(ch_a) - 1,(int)strlen(ch_b) - 1);	
	printf("The length of the Longgest common sequence is %d\n",length);

	return 0;
}

int LCS(char * ch_a,char * ch_b,int a_len,int b_len)
{	
	if(a_len == -1 || b_len == -1)				//a_len和b_len的大小以数组大小来表示
		return 0;					//便于LCS函数操作数组，因此如字符串长度为5，则传值时传4

	if(ch_a[a_len] == ch_b[b_len])
		return (LCS(ch_a,ch_b,a_len - 1,b_len - 1)+1);
	else	
	{
		int len1,len2;
		len1 = LCS(ch_a,ch_b,a_len ,b_len - 1 );
		len2 = LCS(ch_a,ch_b,a_len - 1,b_len );
		return (len1 > len2?len1:len2);
	}	
}
