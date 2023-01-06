#include<stdio.h>
#include<string.h>
struct employees
{
  //declaring the data type of the entries
    char name[13];
    int id;
    int sal;

}e1,e2,e3;

int main()
{
  //taking entry of the names from the system itself
    strcpy(e1.name,"Rahul");
    strcpy(e2.name,"Rishi" );
    strcpy(e3.name,"Ramesh");
//taking entry of the employee  id of the employees
    e1.id = 1212;
    e2.id = 3421;
    e3.id = 9392;
     //taking entry of the salaries of the employees
    e1.sal = 91832;
    e2.sal = 91832;
    e3.sal = 91832;
//printing the information of the employees
printf("The information regarding employee e1 is:\nName of the following employee is %s\n" ,e1.name);
printf("Employee id of the employee is %d\n" ,e1.id);
printf("Salary of the employee is %d\n" ,e1.sal);
 printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
  printf("The information regarding employee e2 is:\nName of the following employee is %s\n" ,e2.name);
printf("Employee id of the employee is %d\n" ,e2.id);
printf("Salary of the employee is %d\n" ,e2.sal);
  printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
  printf("The information regarding employee e3 is:\nName of the following employee is %s\n" ,e3.name);
printf("Employee id of the employee is %d\n" ,e3.id);
printf("Salary of the employee is %d" ,e3.sal);
return 0;
}
