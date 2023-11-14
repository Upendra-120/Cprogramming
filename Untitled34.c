#include<stdio.h>
main()
{
	int arr[5]={1,2,3,4,5};
	int i,loc=-1,key,n=5;  //here n is the number of elemet

	key=3;//this is the value which you want to search
  for (i=0; i<n;i==key)
{
  if (arr[i]==key)     
       {
       	loc=i;
       	//break;
		} 
}



   if (loc!=-1)
  {
	printf("\n elements not found %d",loc+1);
  }
else
  {
	printf("\n elements not found");
  }
}


