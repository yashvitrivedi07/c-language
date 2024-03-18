#include<stdio.h>
#define p printf
#define s scanf
void array(int size,int sum);

void main() 
{
		int size,sum = 0;
		p("Enter array size : ");
		s("%d",&size);
		array(size,sum);

}


void array(int size,int sum)
{	
	int a[size],i;
	p("------:enter array element:------\n\n");
	for(i=0;i<size;i++)
		{
			p("a[%d] : ",i);
			s("%d",&a[i]);
			sum+=a[i];
		}
		p("sum of all array elements : %d",sum);
}


