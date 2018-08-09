/*WAP in C to create an array of n elements, where n is given by the user.
Create two functions insert(int) and delete() to manipulate the elements*/

#include "stdio.h"
void insert(int a[],int n,int pos)
{
     int i,no;
     printf("\nEnter element :");
     scanf("%d",&no);
     if(pos<n)
       a[pos]=no;
     else
     {
        for(i=0;i<n;i++)
        a[i]=a[i+1];
        a[n]=no;
     }
}
void delete(int a[],int pos)
{
     int i;
     for(i=0;i<pos;i++)
     a[i]=a[i+1];
     a[pos]=0;
     printf("\nElement deleted");
}
int main(void)
{ 
    printf("\n============================================="); 
    printf("\n=============================================");
    int n,no,pos,k,j;
    printf("\n                  Enter Size of Array: ");
    scanf("%d",&n);
    int a[n];
    printf("\n=============================================");
    while(j!=0)
    {
        printf("\n                                        Your Choices");
        printf("\n                                        1. Insert an element");
        printf("\n                                        2. Delete the first element");
        printf("\n                                        Enter choice:");
        scanf("%d",&k);
        if(k==1)
        insert(a,n,pos++);
        else if(k==2)
        delete(a,pos--);
        else if(k==3)
        break;
        else 
        printf("\nWrong Choice");
    }
    printf("\n=============================================");
}