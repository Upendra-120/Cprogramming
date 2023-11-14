
/*
#include<stdio.h>
main()
{
	int sum=0;
	int arr[6],i;
    printf("enter the values:");  
	
	for(i=0;i<6;i++)
	{
    
	scanf("%d",&arr[i]);
		
	}
	for (i=0;i<6;i++)
	{
	
	printf("%d\n",arr[i]);
	
    sum=sum+arr[i];
    }
    printf("sum of the  elements:%d",sum);	
}
*/

#include<stdio.h>
main()
{
   int arr[5];
   int i;
   int sum=0;
   int oe=0,os=0,es=0,s;
 

   
   for(i=0;i<5;i++)
   {
     printf("enter the values :");
    	scanf("%d",&arr[i]);
   	
	}
	 
	 	
	for(i=0;i<5;i++);
	{
	 s=s+arr[i];
    }
    
    printf("\nsum of the  elements:%d",s);
    for (i=0;i<5;i++)
	{
	
	if(arr[i]%2==0)
	{
	printf("\n it is even number:%d",arr[i]);
	os=os+arr[i];
    }
    else
    {
    printf("\n it is odd number:%d",arr[i]);
    es=es+arr[i];
	}
	printf("\n the sum of odd number is %d",os);
	printf("\n the sum of the even number is %d",oe);
	
   }
   
}

















































