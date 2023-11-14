#include<stdio.h>
void swap1(int w, int u);
main()
{
	int a,b;
	a=4;
	b=7;
	printf("values of a and b before function call are a= %d and b=%d",a,b);
	swap1(a,b);
}
void swap1(int x, int y)
{
	int z;
	z=x;
	x=y;
	y=z;
	printf("\n values of a and b after swapping inside the function are a=%d and b=%d",x,y);
	
}
