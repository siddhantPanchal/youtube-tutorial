// Find SubString is present or not
// This program is done by Siddhant panchal 
// This program works in visual stdio 
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

bool isSubString(string str, string subStr) {
	bool status = false;
	if (len(str) >= len(subStr))
	{
		for (int i = 0; i < len(str); i++) {
			if (str[i] == subStr[0]) {
				for (int j = 0; j < len(subStr); j++,i++) {
					if (str[i] != subStr[j])
				  {
						status = false;
						break;
					}
					else
					{
						status = true;
					}
				}
			}
		}
	}
	return status;
}


int main()
{
	string str,subStr;
	cout << "\nEnter String : ";
	cin >> str;
	cout << "\nEnter SubString to find : ";
	cin >> subStr;
	if (isSubString(str, subStr)) {
		cout << "\nSub String is Present ";
	}
	else {
		cout << "\nSub String is Absent ";
	}
	return 0;
}
