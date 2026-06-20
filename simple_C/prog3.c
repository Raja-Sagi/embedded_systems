//sum all even and odd number til number N
#include<stdio.h>
int main()
{
	int num,i,odd=0,even=0;
	printf("enter the number :\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%2==0)
		{
			even=even+i;
		}
		else
		{
			odd=odd+i;
		}
	}
	printf("sum of all even number till %d is %d\n",num,even);
	printf("sum of all odd number till %d is %d\n",num,odd);
	return 0;
}
