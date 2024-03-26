#include<stdio.h>
#define p printf
#define s scanf
main()
{
	char mail[30],password[30],lmail[30],lpassword[30];
	
	
	p("Enter your E-mail : ");
	gets(mail);
	
	p("\nEnter your Password : ");
	gets(password);
	
	p("\n\tSign in Successful...");
	
	p("\n\n\n------- : Log in : -------\n");
	
	p("\nEnter your E-mail : ");
	gets(lmail);
	
	p("\nEnter your Password : ");
	gets(lpassword);
	
	
	int email = strcmp(mail,lmail);
	
	int pass=strcmp(password,lpassword);
	
	if(email==0&&pass==0)
	{
		puts("\n\tLogin Successful...");
	}
	else
	{
		puts("\n\tLogin Failed. Invalid Credentials.");
	}
}
