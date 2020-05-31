#include<iostream>
#include<string>
using namespace std;

int len(string str) {
	int length = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	return length;
}


void replaceString(string str,string old_word,string new_word) {
	bool status = false;
	int startIndex = 0, endIndex = len(old_word);
	for (int i = 0; i < len(str); i++) {
		if (str[i] == old_word[0])
		{
			startIndex = i;
			for (int j = 0; j < len(old_word); j++, i++) {
				if (str[i] != old_word[j]) {
					status = false;
					break;
				}
				else
				{
					status = true;
				}
			}
			if (status) {
				str.replace(startIndex, endIndex, new_word);
				cout << str;
				return;
			}
		}
	}
	cout << "\nold word is not found";
}


int main()
{
	string str = "", old_word = "", new_word = "";
	cout << "Enter string : ";
	getline(cin, str);
	cout << "\nEnter Old_word : ";
	cin >> old_word;
	cout << "\nEnter new word : ";
	cin >> new_word;
	cout << "\nString before replacement : " << str << endl;
	replaceString(str, old_word, new_word);
	return 0;
}
