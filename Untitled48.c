#include<stdio.h>
/*struct student
{
	int reg;
	int marks[3];
	
};
main()
{
	int i;
	struct student s1;
	s1.reg=1;
	for(i=0;i<3;i++)
	{
		scanf("%d\n",&s1.marks[i]);
	}
	printf("%d\n",s1.reg);
	
	for(i=0;i<3;i++)
	{
		printf("%d\n",s1.marks[i]);
	}
}
struct student
{
int reg;
struct result
{
	int marks;
}r1;

}s1;
main()
{
	s1.reg=1;
	s1.r1.marks=100;
	printf("%d\n",s1.reg);
	printf("%d\n",s1.r1.marks);
}
	
}*/
union student
{
	char name[20];
	int regno;
	float marks;
}s1;
main()
{
	s1.regno=1;
	printf("size is %d",s1);
}


