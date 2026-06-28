//chech whether prime or not
#include<stdio.h>
int main()
{
	int i,num,count;
	printf("enter the number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num<=1)
		{
			printf("not a prime\n");
		}
		else if(num%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("prime number\n");
	}else
	{
		printf("not a prime\n");
	}
	return 0;
}
