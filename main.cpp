#include <iostream>
using namespace std;

void removeAllChars(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    int j = 0;
    for (int i = 0; i < len; i++) {
        if (str[symbol] == num) {
            str[symbol] = str[num];
        }
    }
    str[j] = '\0';
}
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

int main() {
    char str[100];

    cout << "enter position to paste your symbol";
    cin >> str;

    removeAllChars(str);

    cout << "Result: " << str << endl;

    return 0;
}
