/*#include<stdio.h>
main()
{
	int a[5];
	int *ptr,i;
	ptr=a;
	
	printf("enter the elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("\n elements are:");
	for(i=0;i<5;i++)
	{
		printf("%d",*(ptr+i));
	}
}
*/
/*
#include<stdio.h>
main()
{
	int a[3]={4,5,6};
	int *ptr[3],i;
	
	for(i=0;i<3;i++)
	{
		ptr[i]=&a[i];
	}
	printf("print the elements usig pointer\n:");
	for(i=0;i<3;i++)
	{
		printf("%d",*ptr[i]);
	}
	
	
}
*/

#include<stdio.h>
main()
{
	int i,**j,***k;
	
	j=&i;
	k=&j;
	printf("address i=%d j=%d k=%d\n,&i,j,k");
	
	printf("value at j=%d k=%d \n ,j,k");
		printf("value at j=%d k=%d \n ,**k");
	
	
}
