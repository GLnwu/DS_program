/*************************************************************************
    > File Name: bubble.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2015年07月19日 星期日 13时06分54秒
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>
#define MAX	100
void bubble_sort(int a[],int);
//冒泡排序
void show(int a[],int n);
//显示数组内容
int main(void)
{
	int a[MAX];
	int n=0;		//记录有多少个数字需要排序

	printf("Please input the numbers to be sort:\n");
	printf("Enter q to quit:\n");
	while(scanf("%d",&a[n]) == 1&& n<MAX-1 )
		++n;
	show(a,n);
	printf("\n");
	bubble_sort(a,n);
	show(a,n);
	printf("Done\n");
	return 0;
}

void bubble_sort(int a[],int n)
//将a中的整数序列重新排列成自小至大有序的整数序列
{
	bool change;
	int i,j;
	int temp;

	for(i=n-1,change =true;i>=1&& change;--i)
	{
		change = false;
		for(j = 0;j < i;++j)
		{
			if(a[j]>a[j+1])
			{
				temp 	= a[j+1];
				a[j+1] 	= a[j];
				a[j]	= temp;	
                                change	= true;
			}
		}
	}
}

void show(int a[],int n)
//显示数组内容
{
	int i;

	for(i = 0;i<n;i++)
		printf("%d  ",a[i]);
}
