#include<stdio.h>
void fact()
{
	clrscr();
	int num, i, fact=1;
	cout<<"\n\n Enter a number : ";
	cin>>num;
	for(i=num; i>0; i--)
	{
		fact=fact*i;
	}
	cout<<"Factorial of "<<num<<" is "<<fact;
	getch();
}
