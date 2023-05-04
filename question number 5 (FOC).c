#include<stdio.h>
int main()
{
	int n,i,sum = 0;
	printf("enter the any number :");
	scanf("%d",&n);
	printf("\n the summing up series for %d \n",n);
	for(i = 1;i <= n;i++)
	{
		sum += i;
	}
	printf("\n the sum series = %5d",sum);
	return 0;
}
