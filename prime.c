#include<stdio.h>
#include<conio.h>
void prime()
{
	clrscr();
	int num,i,count=0;
	printf("\n\nEnter a number:");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			count++;
			break;
		}
	}
	if(count==0)
	{
		printf("This is a prime number");
	}
	else
	{
		printf("This is not a prime number");
	}
	getch();
}
