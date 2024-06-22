#include <iostream>
using namespace std;


void replace(char* str)
{
	for (size_t i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			str[i] = '\t';
		}
	}
}

int main()
{
	char str[] = "hello world! hello world! hello world!";

	replace(str);
	cout << str << endl;

	system("pause");
	return 0;
}