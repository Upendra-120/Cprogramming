#include<stdio.h>  // no parameter and no return
// declare
//void print1(); // declaration
//main()
//{
	
//	print1(); // function calling
//	print1();  // function ccalling
	
//}
//void print1()
//{
//int a=5, b=10 , c;
//c=a+b;
//printf("c= %d  ",c);
//}

/*
int sum1();
main()
{
	int c,z;
	printf("%d",sum1());
}

int sum1()
{
	int x=10,y=20,w;
	
    w=x+y;
    return w;    
}
*/
int sum1(int w,int u);
main()
{
	

	
	int a,b,c;

	a=10;
	b=20;
	
	c=sum1(a,b);
	printf("\n  output outside the function in main %d",c);
}

int sum1( int x ,int y)
{
int z;
z=x+y;
printf("output inside the function z= %d",z);
return z;
}




