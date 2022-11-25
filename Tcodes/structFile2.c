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
	FILE *fptr;
	fptr = fopen ("record.txt","a");
   	if (fptr == NULL)
     	{
      	printf("\nError opening file\n\n");
      	exit (1);
     	}
	
	struct Employee e1 , *rec;
	rec = (struct Employee*)malloc (5* sizeof(struct Employee));
	for (int i =0; i< 5; i++)
	{

	printf("Enter employee id in integer:\n");
	scanf("%d",&e1.id);
	
	printf("Enter name of Employee:\n");	
	scanf("%s",e1.name);
	
	printf("Enter age of employee:\n");
	scanf("%d",&e1.age);
	
	printf("Enter pay of employee:\n");
	scanf("%f",&e1.pay);
	
	printf("employee id is%d:\n", e1.id);
	
	printf("name of Employee is : %s\n", e1.name);	
	
	printf("age of employee is : %d\n", e1.age);
	
	printf("pay of employee is : %f\n", e1.pay);
	//fwrite (&e1, sizeof(struct Employee), 1, fptr);
	fprintf(fptr,"ID :%d\t Name :%s\t Age: %d\t Pay: %f\n", e1.id,e1.name,e1.age,e1.pay);


	}
	fclose(fptr);
	free (rec);	

return 0;
}
