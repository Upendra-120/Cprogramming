#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
/*
{
	int a=345;
	char str[20];
	
	
	itoa(a,str,2);
	printf("binary is : %s",str);
}
{
	char x='a'+'c';
	int y='a'+'c';
	++x;
	
	printf("%c\n",x);
	printf("%d",y);
	
	
}
{
	char x[100];
	int i=0;
	printf("enter the string\n");
	gets(x);
	//while(x[i]!='\0')
	for(i=0;i<len;i++)
	{
		if (str[i]>='a' &&str[i]<'z')
		str[i]=str[i]-32;
		
	}
	printf("length of the string is :%d",i);

}*/
{
	//replace the black spaces with $ sign in the string

    char x[100];
    int i=0;
    printf("enter string\n");
    gets(x);
       while (x[i]!='\0')
       {
       	if (x[i]==' ')
       	{
       		x[i]='$';
		   }
		   i++;
		gets(x[i]);
		
	   }

}





