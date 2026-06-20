//find the number of integers divisible by 5
#include<stdio.h>
int main()
{
	int i,num,count;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%5==0)
		{
			count++;
		}
	}
	printf("number of integers divisble by 5 is %d",count);
	return 0;
}

