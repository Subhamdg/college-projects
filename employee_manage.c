/* TITLE="employee management system
   @uthor="Subham Dasgupta" */

#include <stdio.h>
#include <stdlib.h>
#define red   "\x1b[32m"
#define blue    "\x1b[34m"
#define magen   "\x1b[35m"
#define reset   "\x1b[0m"
#define yellow  "\x1b[33m"

struct Employ                                      //structure to save data of employee
{  
    int age;
    int salary;
    char depart[30];
    char name[30];
};                                                  //end of structure
int display(void);
int display1(void);
int input(struct Employ e[],int n);
int sort(struct Employ e[],int n);
int display3(struct Employ e[],int n);


int display(void)
{
    printf(red "\n=========================================================================================" reset);
    printf(magen "\n                           EMPLOYEE MANAGEMENT SYSTEM                                    " reset);
    printf(red "\n=========================================================================================" reset);
    printf(blue "\n                                 Please choose:" reset);
    printf(yellow "\n                           i)  Manage Employee Data" reset);
    printf(yellow "\n                           ii) Terminate program" reset);
    printf(red "\n=========================================================================================" reset);  
} 
int display1(void)
{
    printf(magen "\nNAME \t SALARY \t AGE \t DEPARTMENT \t" reset);
}       
int input(struct Employ e[],int n)
{
  int i=0;
  for(i=0;i<n;i++)
    {
    printf(red "\n=========================================================================================" reset);
    printf(yellow "\n Input details of Employee: %d", (i+1));
    printf(reset);
    struct Employ c;
    printf("\nName of Employee :");
    scanf("%s",c.name);
    printf("\nDepartement of Employee :");
    scanf("%s",c.depart);
    printf("\nSalary of Employee :");
    scanf ("%d",&c.salary);
    printf("\nAge of Employee :");
    scanf("%d",&c.age);
    e[i]=c;
    printf(red "\n=========================================================================================" reset);
    }
}
int sort(struct Employ e[],int n)
{ int i, j;
    struct Employ temp;
    
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < (n - 1-i); j++)
        {
            if (e[j].salary > e[j + 1].salary)
            {
                temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            } 
        }
    }
}  
int display3(struct Employ e[],int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
       printf("\n %s \t  %d \t %d \t %s",e[i].name,e[i].salary,e[i].age,e[i].depart);
    }
     printf("\n");
}
                                   
int main(void)                                    //main() function to store and calculate data 
{
    display();
    int n;
    int r;
    printf("\n Enter your choice");
    scanf("%d",&n);
    if(n==2)
    exit(0);
    printf(red "\n=========================================================================================" reset);
    printf("\n                                     No. of Employees:");
    scanf("%d",&r);
    printf(red "\n=========================================================================================" reset);

    struct Employ em[r];
    input(em,r);
    sort(em,r);
    display1();
    display3(em,r);
   

} 
