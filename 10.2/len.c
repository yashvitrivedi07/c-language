#include<stdio.h>
#define p printf
#define s scanf
void y (int len,int count);
void main()
{
	char n[20];
	p("enter string : ");
	s("%s",&n);
	void y (len=0,count);
	
}
void y (int len=0,int count);
	
	int i,j;
	for(i=0;n[i]!=NULL;i++)
	{
		len++;
	}
	p("\nstring lenth :%d\n",len);
	for(i=0;i<len;i++)
	{
		count=1;
		if(n[i]!=0)
		{
			for(j=j+1;j<len;j++){
			
			if(n[i]==n[j])
			{
				count++;
				n[j]=NULL;
			}
			}
	}
		
	p("%C : %d\n",n[i],count);
			
	}
