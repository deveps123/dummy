#include<stdio.h>
#include<conio.h>
void Big2()
{
	clrscr();
	int a, b, big;
	printf("\n\n Enter two number : ");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		big=a;
	}
	else
	{
		big=b;
	}
	printf("Biggest of the two number is %d",big);
	getch();
}
