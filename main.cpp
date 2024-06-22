#include <iostream>
using namespace std;


size_t my_strlen(const char* str) {
    size_t len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main()
{
	char str[] = "hello world!";
    cout << "amount of symbols in str = " << my_strlen(str) << endl;
	system("pause");
	return 0;
}