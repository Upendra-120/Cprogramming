#include<stdio.h>
struct emp
{
	char name[20];
	int age;
	float salary;
};
/*main()
{
	int i;
	struct emp e[100];
	for(i=0;i<2;i++)
	{
	
	printf("enter the name and salary\n");
	gets(e[i].name);
	fflush(stdin);
	scanf("%d",&e[i].age);
	fflush(stdin);
	scanf("%f",&e[i].salary);
	fflush(stdin);
     }
     for(i=0;i<2;i++)
     {
     	printf("name is %s\n",e[i].name);
     	printf("age is %d\n",e[i].age);
     	printf("salary  is %f\n",e[i].salary);
	 }
}*/
main()
{
	struct emp e1={"Abhi",20,500000};
	struct emp *ptr;
	ptr=&e1;
	printf("name %s,age %d,salary %f\n",e1.name,e1.age,e1.salary);
	
	printf("name %s,age %d,salary %f\n",ptr->name,ptr->age,ptr->salary);	
	
	printf("name %s,age %d,salary %f\n",(*ptr).name,(*ptr).age,(*ptr).salary);	
		
}
