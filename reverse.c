#include<stdio.h>
#include<conio.h>
#include<string.h>
void rev()
{
	clrscr();
	char str[100], temp;
	int i=0, j;
	printf("\n\n Enter the String : ");
	gets(str);
	i=0;
	j=strlen(str)-1;
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	printf("Reverse of the String = %s",str);
	getch();
}
