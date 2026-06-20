//swap two numbers
#include<stdio.h>
int main()
{
	int num1, num2,temp;
	scanf("%d %d",&num1,&num2);
	printf("original_num1 is %d ,original_num2 is %d\n",num1, num2);
	temp=num1;
	num1=num2;num2=temp;
	printf("new_num1 is %d , new_num2 is %d\n",num1, num2);
	return 0;
}

