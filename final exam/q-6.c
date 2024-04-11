#include<stdio.h>
#define p printf
#define s scanf

struct employees{
	int id;
	char name[50];
	char role[30];
	
};

main()
{
	int n,i;
	p("enter number of employees :");
	s("%d",&n);
	
	FILE *fp;
	fp = fopen("data.txt","w");
	
	

	struct employees emp[n];
	
  for(i=0; i<n; i++)
  {
  	
	p("\nemployee no [%d]----\n",i+1);
	fflush(stdin);
	p("\nEnter employee I'd : ");
	s("%d",&emp[i].id);	
	fflush(stdin);
  	p("Enter name of employee : ");
	s("%[^\n]",&emp[i].name);
 	fflush(stdin);
	p("Enter designation :");
	s("%[^\n]",&emp[i].role);
	

	
  }
	
	fprintf(fp,"\nI'D\t\tNAME\t\tDESIGNATION\n");
	
	for(i=0; i<n; i++)
	{
		fprintf(fp,"%d\t\t%s\t\t%s\n",emp[i].id,emp[i].name,emp[i].role);
	}
}
