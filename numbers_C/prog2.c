//c program to check whether a given number is perfect number
#include<stdio.h>
int main()
{
	int i,num,sum=0;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(num==sum)
	{
		printf("perfect number\n");
	}
	else
	{
		printf("not a perfect number\n");
	}
	return 0;
}

