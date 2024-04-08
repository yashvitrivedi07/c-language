/*
	Q.2 Write a Program to create an Employee Record System with an Array of objects for a given N number of employees using structure. Consider the below-mentioned attributes in the Employee structure:
	- emp_id
	- emp_name
	- emp_age
	- emp_role
	- emp_city
	- emp_experience
	- emp_company_name

*/
#include<stdio.h>
#define p printf
#define s scanf

struct employees {

	int id;
	char name[30];
	int age;
	char role[30];
	char city[30];
	float experience;
	char companyname[50];
		
	
};
main()
{
	int n,i;
	p("enter number of Employee : ");
	s("%d",&n);
	
	struct employees emp[n];
	
	for(i=0; i<n; i++)
	{
		p("-----: Employee no : %d :-----\n\n",i);
	
		p("Enter Employee [%d] i'd : ",i);
		s("%d",&emp[i].id);
		fflush(stdin);
		p("Enter Employee [%d] name : ",i);
		s("%[^\n]",&emp[i].name);
		fflush(stdin);
		p("Enter Employee [%d] age : ",i);
		s("%d",&emp[i].age);
		fflush(stdin);
		p("Enter Employee [%d] role : ",i);
		s("%[^\n]",&emp[i].role);
		fflush(stdin);
		p("Enter Employee [%d] city : ",i);
		s("%[^\n]",&emp[i].city);
		fflush(stdin);
		p("Enter Employee [%d] experience : ",i);
		s("%f",&emp[i].experience);
		fflush(stdin);
		p("Enter Employee [%d] company name : ",i);
		s("%[^\n]",&emp[i].companyname);
		
	}
	
	p("\n\tI'd\tName\tAge\tRole\tCity\tExperience\tCompany name\n");
	p("\t---\t----\t---\t------\t----\t--------\t------\n");
	for(i=0; i<n ;i++)
	{
		p("\n\t%d\t%s\t%d\t%s\t%s\t%.1f\t\t%s",emp[i].id,emp[i].name,emp[i].age,emp[i].role,emp[i].city,emp[i].experience,emp[i].companyname);
	}
	
}	
