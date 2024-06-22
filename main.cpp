#include <iostream>
using namespace std;


void replace(char* str, int num)
{
	for (size_t i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			str[char(num)] = ' ';
		}
	}
}

int main()
{
	for (size_t i = 65; i <= 122; i++)
	{
		cout << "\t\t" << i << " - " << char(i) << endl;
	}
	char str[] = "Hello world!";
	int num;
	do
	{
		cout << "enter num to delete symbol";
		cin >> num;
	} while (num <= 65 && num >= 122);

	replace(str, num);
	cout << str << endl;

	system("pause");
	return 0;
}