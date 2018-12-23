#include<stdio.h>
#include<conio.h>
void big3()
{
	clrscr();
	int a, b, c, big;
	printf("\n\n Enter three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	//let a is the biggest
	big=a;
	if(big<b)
	{
		if(b>c)
		{
			big=b;
		}
		else
		{
			big=c;
		}
	}
	else if(big<c)
	{
		if(c>b)
		{
			big=c;
		}
		else
		{
			big=b;
		}
	}
	else
	{
		big=a;
	}
	printf("Biggest number is %d",big);
	getch();
}
