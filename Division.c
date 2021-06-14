/*
   Author: Rinkesh Narayan Ingole
   Date  : 16/11/2020
   About: This C Program about division of two number
*/

#include<stdio.h>
int Divide(int no1,int no2)
{
	int result=0;
	
	
	if(no2>no1)
	{
		return -1;
	}
	
	result=no1/no2;
	
	return result;
}




int main()
{
	int value1=0,value2=0;
	int iret=0;
	
	printf("Enter the First Number\n");
	scanf("%d",&value1);
	
	printf("Enter the Secound Number\n");
	scanf("%d",&value2);
	
	iret=Divide(value1,value2);
	
	printf("Result of Division is %d",iret);
	
	return 0;
}