#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee{

	int id ;
	char name[20];
	int age ;
	float pay;

};


int main()
{
	struct Employee e1 ;
	int id , age; 
	float pay;
	char name[20];
	printf("Enter employee id in integer:\n");
	scanf("%d",&id);
	e1.id = id;
	
	printf("Enter name of Employee:\n");	
	scanf("%s",name);
	strcpy(e1.name,name);
	printf("Enter age of employee:\n");
	scanf("%d",&age);
	e1.age = age;
	printf("Enter pay of employee:\n");
	scanf("%f",&pay);
	e1.pay = pay;
	printf("employee id is%d:\n", e1.id);
	
	printf("name of Employee is %s:\n", e1.name);	
	
	printf("age of employee is %d:\n", e1.age);
	
	printf("pay of employee is %f:\n", e1.pay);
	
		

return 0;
}
