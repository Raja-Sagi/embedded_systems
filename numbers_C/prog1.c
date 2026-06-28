//print prime numbers in a given range
#include<stdio.h>
int main()
{
	int i,j,n1,n2,count;
	printf("enter the start and end numbers");
	scanf("%d%d",&n1,&n2);
	for(i=n1;i<=n2;i++)
	{
		if(i<2)
		{
			continue;
		}
			count=0;
			for(j=1;j<=i;j++)
			{
				if(i%j==0)
				{
					count++;
				}
			}
		if(count==2)
		{
			printf("%d \n",i);
		}
	}
	return 0;
}



			
		


