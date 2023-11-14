#include<stdio.h>
main()
{
	int i,j,hold;
	int a[7]={9,3,5,1,7,6,2};
	int n=7;
	for(i=0;i<n-1;i++)   //loop to control the passes:7-1=6
	{
		for(j=0;j<n-i-1;j++)
		{
		  if(a[j]>a[j+1])
		  {
		  	hold=a[j];
		  	a[j]=a[j+1];
		  	a[j+1]=hold;
		   } 	
		}
		
		
	}
	
	for (i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
