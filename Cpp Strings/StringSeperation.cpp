// String Seperation 

#include<iostream>
#define max 4
using namespace std;


string strings[max];

int len(string str) {
	int length = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	return length;
}

void split(string str, char seperator)
{
	int currentIndex = 0, i = 0;
	int startingIndex = 0, endingIndex = 0;
	while (i <= len(str))
	{
		if (str[i] == seperator || i == len(str)) {
			endingIndex = i;
			string subStr = "";
			subStr.append(str, startingIndex, endingIndex - startingIndex);
			strings[currentIndex] = subStr;
			currentIndex += 1;
			startingIndex = endingIndex + 1;
		}
		i++;
	}
}

int main()
{
	string str = "I am Siddhant,Panchal";
	char seperator = ',';  // space
	split(str, seperator);


	for (int i = 0; i < max; i++) {
		cout << "\n i : " << i << " " << strings[i];
	}
	return 0;
}
