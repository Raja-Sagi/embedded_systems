//error program because of format specifier
#include<stdio.h>
int main()
{
	short int x=55,y=66;
	printf("x=%d y=%d\n",x,y);
	printf("enter two numbers");
	scanf("%d%d",&x,&y);
	printf("x=%d y=%d",x,y);
}
