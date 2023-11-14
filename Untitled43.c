/*#include<stdio.h>
#include<conio.h>
main()
{
	char name1[]="lovely professional university";
	char name2[40]="i study at LPU";
	char name3[20]={'u','n','i'};
	char name4[]={'L','P','U'};
	char name5[10]={{'E'},{'C'},{'E'}};
	printf("%s\n",name1);
		printf("%s\n",name2);
			printf("%s\n",name3);
				printf("%s\n",name4);
					printf("%s\n",name5);
}

#include<stdio.h>
#include<conio.h>
main()
{
	char name[20];
	char details[20];
	printf("enter the details of string\n");
	scanf("%s",&name);
	printf("the output is:%s",name);
}
#include<stdio.h>
#include<conio.h>
main()
{
	char name[20];
	char details[20];
	gets(details);
	puts(details);
}*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char s1[60]="lovely professional university";
	char s2[60]="how are you";
   //int n=9;
	
	//strcpy(s2,s1);
//	strncpy(s2,s1,10);
   // strcat(s1,s2);
   strncat(s1,s2,9);
	printf("content after cpy s1 into s2 is %s",s1);
}

