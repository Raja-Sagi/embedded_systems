#include<stdio.h>
int main()
{
	int i,j,range;
	printf("enter the range:\n");
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	{
		for(j=range;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
