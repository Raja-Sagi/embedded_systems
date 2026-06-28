//check whether the number is amstrong or not

#include<stdio.h>
#include<math.h>
int main()
{
	int num,digit,n=0,temp,sum=0,s=0;
	printf("enter the number");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		temp=temp/10;
		n++;
	}
	temp=num;
	while(temp!=0)
	{
		digit=temp%10;
		temp=temp/10;
		s=pow(digit,n);
		sum=sum+s;
	}
	if(sum==num)
	{
		printf("amstrong number\n");
	}
	else
	{
		printf("not an amstrong number\n");
	}
	return 0;
}




