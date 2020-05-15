#include<iostream.h>
#include<conio.h>

void main()
{
	int result = 0;
	int nos = 0;
	int size = 0;
	clrscr();
	cout<<"\nHow many nos you want to add : ";
	cin>>size;
	for(int i = 0;i<size;i++)
	{
		cout<<"\nEnter No : ";
		cin>>nos;
		result = result + nos;
		nos = 0;
	}

	cout<<"\nResult : "<<result;

getch();
}
