#include<iostream>
using namespace std;

bool isCapitalLetter(char character) {
	int ascciCode = (int)character;
	int minCode = 65, maxCode = 90;
	if (minCode <= ascciCode && ascciCode <= maxCode) {
		return true;
	}
	else
		return false;
}



int main()
{
	char character = 'a';
	cout << "Enter Character : ";
	cin >> character;
	if (isCapitalLetter(character))
		cout << "Capital Letter";
	else
		cout << "Small Letter";
	return 0;
}


// A = 65 , Z = 90
