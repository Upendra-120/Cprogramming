/*
#include<stdio.h>
void swap1(int  *, int *);
main()
{
	int a=7, b=9;
	printf("before swappping the values of a = %d b=%d\n", a,b);
	swap1(&a,&b);
	printf("before swappping the values of a = %d b=%d\n", a,b);
}
void swap1(int *x,int *y)
{
	int temp;
	int *ptemp=&temp;
    *ptemp=*x;
	*x=*y;
	*y=*ptemp;
	printf("values of a = %d b=%d\n", *x,*y);
}
*/
#include<stdio.h>
main()
{
	int x=10,b=9;
	char c='A';
	void *ptr;
	ptr=&x;
	printf(" the value at generic pointer is",*(int*)ptr);
	ptr=&c;
	printf("\nthe value at generic pointer is",*(char*)ptr);
	
	
}



