/*************************************************************************
    > File Name: Fibonacci_improve.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Tue 15 Mar 2016 12:03:20 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	long long f = 0;
	long long g = 1;
	int n,i = 0;

	if(argc != 2)
	{
		fprintf(stderr,"Usage:%s number\n",argv[0]);
		exit(EXIT_FAILURE);
	}
	if((n = atoi(argv[1])) == 0)
	{
		fprintf(stderr,"Wrong argument!");
		exit(EXIT_FAILURE);
	}
	printf("fib[%d] = %lld\nfib[%d] = %lld\n",i,f,i+1,g);
	while( 0 < (n--))
	{	
		g = g + f;
		f = g - f;
		i++;
		printf("fib[%d] = %lld\nfib[%d] = %lld\n",i,f,i+1,g);
	}

	return 0;

}
