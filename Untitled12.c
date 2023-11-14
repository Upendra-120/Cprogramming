#include<stdio.h>
main()
{
	int a, b , c;
	printf("enter the values  a b and c");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf(" A is bigger than all");
	}
    else if(b>a && b>c)
	   {
		printf("B is bigger than all");
	   }  
	
	else
	{
		printf("C is bigger than all");
		
	}
	
}
