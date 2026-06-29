#include<stdio.h>
int main()
{
	int num,digit,temp,num1=0;
	printf("enter the number:\n");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		digit=temp%10;
		num1=(num1*10)+digit;
		temp/=10;
	}
	printf("the reverse number is %d\n",num1);
	return 0;
}

