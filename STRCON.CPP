#include<iostream.h>
#include<conio.h>
#include<string.h>

void display(char *ptr)
{
	while(ptr != NULL)
	{
		cout<<*ptr;
		ptr++;
	}
}


void main()
{
	char first_name[] = "Siddhant ";
	char last_name[] = "Panchal";
	char *full_name = strcat(first_name,last_name);
	clrscr();
	display(full_name);
getch();
}