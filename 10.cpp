//Write a program to print a table of N
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the no\n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d\n",n*i);
	}
	return 0;
}
