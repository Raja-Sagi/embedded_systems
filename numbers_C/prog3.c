#include<stdio.h>
int main()
{
	int num,temp,digit,sum=0,fact=1;
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		digit=num%10;
		num=num/10;
		for(int i=digit;i>=1;i--)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		fact=1;
	}
	if(temp==sum)
	{
		printf("strong number");
	}
	else
	{
		printf("not a strong number");
	}
	return 0;
}
