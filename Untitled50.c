#include<stdio.h>
#include<string.h>
main()
{
	char s1[30]="I am a student";
	/*int i;
	i=strlen(s1);
	printf("%d\n",i);
	printf("%s\n",strupr(s1));
	printf("%s\n",strlwr(s1));
	printf("%s\n",strrev(s1));
	
	int i=0;
	while(s1[i]!='\0')
	{
	
	i++;
		
	}
	printf("%d\n",i);*/
	char temp;
	int i=0 ;
	int j=strlen(s1)-1;
	while(i<j)
	{
		temp=s1[i];
		s1[i]=s1[j];
		s1[j]=temp;
		i++;
		j--;
	}
		printf("%s",s1);
}


