#include<stdio.h>
main()
{
	
	int a[3][3],b[3][3],c[3][3];
	int i,j;
	printf("enter the values:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		   scanf("%d",&a[i][j]);
		}

		
	}

	printf("enter the elements in the second array\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		   scanf("%d",&a[i][j]);
		   
		}
	
		
	}
	
	printf("the sum of the elements are\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d",c);
		}
		printf("\n");
	}
	
}
