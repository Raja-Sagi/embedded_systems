#include<stdio.h>
int main()
{
	int num,temp,sum,digit;
	printf("enter the number:\n");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		digit=temp%10;
		sum=(sum*10)+digit;
		temp/=10;
	}
	if(sum==num)
	{
		printf("it is a palindrome\n");
	}
	else
	{
		printf("not a palindrome\n");
	}
	return 0;
}
