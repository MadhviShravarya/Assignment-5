//Write a program to print the first N even natural numbers
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the no\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    printf("%d\n",2*i);
	}
	return 0;
}
