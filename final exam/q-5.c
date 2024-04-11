#include<stdio.h>
#define p printf
#define s scanf

struct book{
	char title[50];
	char author[30];
	int price;
};

main()
{
	int n,i;
	p("enter number of books :");
	s("%d",&n);
	
	struct book b[n];
	
  for(i=0; i<n; i++)
  {
  	
	p("\nbook no [%d]----\n",i+1);
	fflush(stdin);
  	p("\nEnter Title of book : ");
	s("%[^\n]",&b[i].title);
 	fflush(stdin);
	p("Enter Author name :");
	s("%[^\n]",&b[i].author);
	fflush(stdin);
	p("Enter book Price :");
	s("%d",&b[i].price);	
	
  }
	
	p("\ntitle\t\tauthor\t\tprice\n");
	
	for(i=0; i<n; i++)
	{
		p("%s\t\t%s\t\t%d\n",b[i].title,b[i].author,b[i].price);
	}
}
