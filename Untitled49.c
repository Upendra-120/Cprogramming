/*
#include<stdio.h>
#include<string.h>
union data
{
	char str[20];
	int i;
	float f;
	
	
};
struct meta
{
	char str[20];
	int i;
	float f;
	
	
};
main()
{
	union data d;
	struct meta m;
	
	printf("size of union is %d\n",sizeof(d));
	printf("size of struct is %d\n",sizeof(m));
}
*/
#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	int age;
};
struct student show(struct student s);
main()
{
	struct student s1={1,21};
	struct student s3;
	s3=show(s1);
	printf()
	};
	void show (struct student s)
	{
		printf("id is %d\n",s.id);
		printf("age is %d",s.age);
	}






























