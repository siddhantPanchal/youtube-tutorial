#include<iostream>
using namespace std;

int len(string str) {
	int length = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	return length;
}

string reverString(string str) {
	string revStr = "";
	int index = len(str)-1;
	for (int i = 0; i < len(str); i++) {
		revStr += str[index];
		index--;
	}
	return revStr;
}

int main()
{
	string str = "Siddhant";
	cout << reverString(str);
	return 0;
}
