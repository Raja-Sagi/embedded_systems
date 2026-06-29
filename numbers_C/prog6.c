#include<stdio.h>
int main()
{
	int i,range,sum=0;
	printf("enter the range:");
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	{
		sum=sum+i;
	}
	printf("sum of first %d natural numbers is %d\n",range,sum);
	return 0;
}
