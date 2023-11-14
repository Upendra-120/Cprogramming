
/*#include<stdio.h>
#include <stdlib.h>
main()
{
	int *p,n,i;
	printf("enter the number of integers to be used");
	scanf("%d",&n);
	p= (int*)malloc(n*(sizeof(int)));
	if (p==NULL)
	{
		printf("no memory avilable");
		exit(1);
	}
	else
	{
		printf("momory allocation was successful \n");
		printf("enter the values\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",p+i);
		}
		for(i=0;i<n;i++)
		{
			printf("%d",*(p+i));
		}
	}
	
	
	
	
}
*/
#include<stdio.h>
#include <stdlib.h>
main()
{
	int *p,n,i;
	printf("enter the number of integers to be used");
	scanf("%d",&n);
	p= (int*)calloc(n,sizeof(int));
	if (p==NULL)
	{
		printf("no memory avilable");
		exit(1);
	}
	else
	{
		printf("momory allocation was successful \n");
		printf("enter the values\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",p+i);
		}
		for(i=0;i<n;i++)
		{
			printf("%d",*(p+i));
		}
	}
	
	
	
	
}

