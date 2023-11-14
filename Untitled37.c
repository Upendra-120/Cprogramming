#include<stdio.h>
main()
{
	int i,j;
	int a[2][2];
	printf("enter the values:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("show the elements of the array \n");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		
			printf("%d",a[i][j]);
     	}
     	printf("\n");
	}
	
	
	
}
