//check if 2 number are equal
#include<stdio.h>
int main()
{
	int num1,num2;
	scanf("%d%d",&num1,&num2);
	if(num1==num2)
	{
		printf("the numbers %d,%d are equal\n",num1,num2);
	}
	else
	{
		printf("the numbers %d ,%d are not equal\n",num1,num2);
	}
	return 0;
}
