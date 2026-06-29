//c program to display amstrong number between 2 intervals
#include<stdio.h>
#include<math.h>
int main()
{
	int num1,num2,s,digit,temp,n=0,sum=0;
	printf("enter the range");
	scanf("%d%d",&num1,&num2);
	for(int i=num1;i<=num2;i++)
	{
		temp=i;
		sum=0;
		n=0;
		while(temp!=0)
		{
			temp/=10;
			n++;
		}
		temp=i;
		while(temp!=0)
		{
			digit=temp%10;
			temp=temp/10;
			s=pow(digit,n);
			sum=sum+s;
		}
		if(sum==i)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
