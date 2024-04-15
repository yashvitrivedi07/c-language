#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

/*	Q.1 Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case, and looping. Make sure that the program is endless until a certain letter is pressed.
For example,
Output:
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 1
Enter the first number: 5
Enter the second number: 3
Addition of 5 and 3 is 8

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 4
Enter the first number: 10
Enter the second number: 5
Division of 10 and 5 is 2

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 0
*/
int calculator(int n, int a, int b);
int main()
{

	int n,a,b;
	

    while(n=1)
    {
    	
		p("Press 1 for +\n");
		p("Press 2 for -\n");
		p("Press 3 for *\n");
		p("Press 4 for /\n");
		p("Press 5 for %\n");
		p("Press 0 for the exit");
			
		
		
		printf("\n\nenter your choice : ");
		s("%d",&n);
		
	
	
	if(n==0)
	{
		break;
	}
	else{
	
		
	
		switch(n)
		{
			case 1:
				p("\n\nEnter the first number: ");
				s("%d",&a);
				p("\nEnter the second number: ");
				s("%d",&b);
				
				p("\n\n ANS : Addition of %d and %d = %d\n\n\n",a ,b, calculator(n,a,b));
			
			
				break;
					
			case 2:
				p("Enter the first number: ");
				s("%d",&a);
				p("\nEnter the second number: ");
				s("%d",&b);
				
				p("\n\nSubtraction of %d and %d = %d\n\n",a,b,calculator(n,a,b));
			
				break;
			case 3:
				p("Enter the first number: ");
				s("%d",&a);
				p("\nEnter the second number: ");
				s("%d",&b);
				
				p("\n\nMultiplication of %d and %d = %d\n\n",a,b,calculator(n,a,b));
		
				break;
			case 4:
				p("Enter the first number: ");
				s("%d",&a);
				p("\nEnter the second number: ");
				s("%d",&b);
				
				p("\n\nDivision of %d and %d = %d\n\n",a,b,calculator(n,a,b));
				
					
				break;
			case 5:
				p("Enter the first number: ");
				s("%d",&a);
				p("\nEnter the second number: ");
				s("%d",&b);	
				
				p("\n\nModus of %d and %d = %d\n\n",a,b,calculator(n,a,b));
				
				break;
				
			default :
				p("-----Invalid Input---\n\n");
			}
		}
	}
}
	

	
	int calculator(int n,int a,int b)
	{
		if(n==1)
		{
			return a+b;
		}
		else if(n==2)
		{
			return a-b;
		}
		else if(n==3)
		{
			return a*b;
		}
		else if(n==4)
		{
			if(b==0||a==0)
				{
					p("\n\nCannot be divided by 0");
					return 0;
				}
			else{
				return a/b;
			}
		}
		else if(n==5)
		{
			return a%b;
		}
	}
	



