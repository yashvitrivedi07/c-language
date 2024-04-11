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
	int total;
	int percent;
};

main()
{
	int n;
	p("Enter no of students : ");
	s("%d",&n);
	
	struct marksheet m[n];
	
	for(i=0; i<n; i++)
	{
		p("Enter Roll no : ");
		s("%d",&m[i].rollno);
		
		p("Enter Roll no : ");
		s("%s",&m[i].name);
		
		p("Enter Roll no : ");
		s("%d",&m[i].chemistry);
		
		p("Enter Roll no : ");
		s("%d",&m[i].mathematics;
		
		p("Enter Roll no : ");
		s("%d",&m[i].physics);
		
	
		
		
	}
}





