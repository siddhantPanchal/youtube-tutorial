#include<iostream.h>
#include<conio.h>
#define max 10

int len(char arr[])
{
	int i = 0 , length = 0;
	while(arr[i] != '\0') // at the end of string compiler auto generates \0 that means null
	{
		length++;
		i++;
	}
return length;
}


void main()
{

	char arr[max];
	clrscr(); //clear the screen before starts the showing output
	cout<<"\nEnter String to find out length : ";
	cin>>arr;
	//now we can call from anywhere in this program
	cout<<"lenght : "<<len(arr);

getch();
}