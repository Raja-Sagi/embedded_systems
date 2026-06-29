#include<stdio.h>
int main()
{
	int i,j,range;
	printf("enter the range");
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	{
		for(j=1;j<=range;j++)
		{
			printf("%c",64+i);
		}
		printf("\n");
	}
	return 0;
}
