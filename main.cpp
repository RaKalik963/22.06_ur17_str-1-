#include <iostream>
using namespace std;


void replace(char* str, int num)
{
	for (size_t i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			str[num] = ' ';
		}
	}
}

int main()
{
	char str[] = "hello world!";
	int num;
	cout << "enter num to delete symbol";
	cin >> num;

	replace(str, num);
	cout << str << endl;

	system("pause");
	return 0;
}