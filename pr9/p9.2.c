/*
	Q.2 Write a Program to generate mark sheets for a student. Enter the marks of 5 students in Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes: roll no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each student.
For example,
Input:
Enter details of Student 1:
Roll no => 121
Name => Raj Patel
Chemistry => 95
Mathematics => 90
Physics => 88

Output:
Raj Patel (121)
Chemistry => 95
Mathematics => 90
Physics => 88
Total => 273/300
Percent => 91.00%


*/

#include<stdio.h>
#define p printf
#define s scanf

struct marksheet
{
	int rollno;
	char name[30];
	int chemistry;
	int mathematics;
	int physics;

};

main()
{
	int n,i;
	p("Enter no of students : ");
	s("%d",&n);
	
	struct marksheet m[n];
	int total[n];
	float per;
	
	for(i=0; i<n; i++)
	{
		p("\n\n--- : Student no %d :---\n",i+1);
		p("\nEnter Roll no : ");
		s("%d",&m[i].rollno);
		fflush(stdin);
		p("Enter student name : ");
		s("%[^\n]",&m[i].name);
		fflush(stdin);
		p("Enter chemistry marks : ");
		s("%d",&m[i].chemistry);
		fflush(stdin);
		p("Enter mathematic marks : ");
		s("%d",&m[i].mathematics);
		fflush(stdin);
		p("Enter physics marks : ");
		s("%d",&m[i].physics);
		
	}
	
	
	for(i=0; i<n; i++)
	{
		total[i] = m[i].chemistry + m[i].mathematics + m[i].physics;
	
	}
	
	for(i=0; i<n; i++)
	{
		
		p("\n\n--- : Student no %d :---\n",i+1);
		p("\n%s :(%d)\n",m[i].name,m[i].rollno);
		p("CHEMISTRY : %d\n",m[i].chemistry);
		p("MATHEMATICS: %d\n",m[i].mathematics);
		p("PHYSICS : %d\n",m[i].physics);
		p("TOTAL : %d\n",total[i]);
	
		
		per = ((float)total[i] / 300) * 100;
		p("PERCENTAGE : %.2f",per);
		
		
	}
	
}





