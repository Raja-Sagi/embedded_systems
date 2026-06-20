//check whther the number is positive or negative
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	if(num>=0)
	{
		printf("the number %d is positive \n",num);
	}
	else
	{
		printf("the number %d is negative number\n ",num);
	}
	return 0;
}
