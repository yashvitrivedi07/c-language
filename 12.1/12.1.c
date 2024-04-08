/*
		Q.1 Write a Program to create Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
			- stu_id
			- stu_name
			- stu_age
			- stu_course
			- stu_city
			- stu_standard
			- stu_school
*/


#include<stdio.h>
#define p printf
#define s scanf


struct student {

	int id;
	int age;
	int standard;
	char school[50];
	char course[20];
	char name[30];
	char city[30];
	
};
main()
{
	int n,i;
	p("enter number of students : ");
	s("%d",&n);
	
	struct student s1[n];
	
	for(i=0; i<n; i++)
	{
		p("-----: student %d :-----\n\n",i);
	
		p("Enter student [%d] i'd : ",i);
		s("%d",&s1[i].id);
		fflush(stdin);
		p("Enter student [%d] name : ",i);
		s("%[^\n]",&s1[i].name);
		fflush(stdin);
		p("Enter student [%d] age : ",i);
		s("%d",&s1[i].age);
		fflush(stdin);
		p("Enter student [%d] course : ",i);
		s("%[^\n]",&s1[i].course);
		fflush(stdin);
		p("Enter student [%d] city : ",i);
		s("%[^\n]",&s1[i].city);
		fflush(stdin);
		p("Enter student [%d] standard : ",i);
		s("%d",&s1[i].standard);
		fflush(stdin);
		p("Enter student [%d] school name : ",i);
		s("%[^\n]",&s1[i].school);
		
	}
	
	p("\n\ti'd\tname\tage\tcourse\tcity\tstandard\tschool\n");
	p("\t---\t----\t---\t------\t----\t--------\t------\n");
	for(i=0; i<n ;i++)
	{
		p("\n\t%d\t%s\t%d\t%s\t%s\t%d\t\t%s",s1[i].id,s1[i].name,s1[i].age,s1[i].course,s1[i].city,s1[i].standard,s1[i].school);
	}
	
}	
