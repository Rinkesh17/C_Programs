/*
   Author: Rinkesh Narayan Ingole
   Date  : 16/11/2020
   About: This C Program about Accept N number from user as well as accept one number and return thre frequency of that number

*/



#include<stdio.h>
#include<stdlib.h>
int Frequency(int arr[],int isize, int iNum)
{
    if(arr==NULL) 
    {
        return -1;
    }
    if(isize<0)
    {
        return -2;
    }
   
   int iStart=0;
   int iEnd=0;
   int iCnt=0;
   
   for(iStart=0,iEnd=isize-1;iStart<=iEnd;iStart++,iEnd--)
   {        

            if((iStart==iEnd)&&(arr[iStart]==iNum))
            {
                iCnt++;
                break;
            }
  
           if(arr[iStart]==iNum)
              {
                 iCnt++;
              }
           if(arr[iEnd]==iNum)
              {
                  iCnt++;
              }   
    }

    return iCnt;
  
       
       
}


int main()
{
    int ivalue,icnt,iNo1,iRet=0;
    int *p=NULL;

    printf("Enter the size of array\n");
    scanf("%d",&ivalue);

    p=(int*)malloc(sizeof(int)*ivalue);
    
    printf("\nEnter the Element  of array\n");
    for(icnt=0;icnt<ivalue;icnt++)
    {
        scanf("%d",&p[icnt]);
    }

    printf("\nElement  of array are\n");
    for(icnt=0;icnt<ivalue;icnt++)
    {
        printf("%d\t",p[icnt]);
    }

    printf("Enter the element that we want to search\n");
    scanf("%d\n",&iNo1);

    


  iRet=Frequency(p,ivalue,iNo1);
  printf("Frequency of Number is -> %d",iRet);


}
