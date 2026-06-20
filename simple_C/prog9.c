//sum of digits
#include<stdio.h>
int main()
{
	int num,digit,sum=0,temp;
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		digit=num%10;sum=sum+digit;
		num=num/10;
	}
	printf("sum of the digit of the number %d is %d ",temp,sum);
	return 0;
}
