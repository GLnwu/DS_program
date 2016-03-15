/*************************************************************************
    > File Name: Fibonacci.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Tue 15 Mar 2016 10:21:51 AM CST
 ************************************************************************/
/* 计算Fibonacci数列的第n项(二分递归版) */
#include<stdio.h>
#include<stdlib.h>
long long fib(int n);

int main(int argc,char *argv[])
{
	int i;
	int n;

	if(argc != 2)
	{
		fprintf(stderr,"Usage:%s number\n",argv[0]);
		exit(EXIT_FAILURE);
	}
	if((n = atoll(argv[1])) == 0)
	{
		fprintf(stderr,"Wrong argument!");
		exit(EXIT_FAILURE);
	}

	for(i = 0;i < atoll(argv[1]);i++)
		printf("\tfib(%d) = %lld\n ",i,fib(i));
	return 0;
}

long long fib(int  n){
	return (2 > n)?n:	//若到达递归基
		fib(n - 1) + fib(n-2);	//否则递归计算前两项
}
