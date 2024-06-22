#include <iostream>
using namespace std;

void removeAllChars(char str[], char symbol, int num) {
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

int main() {
    char str[] = "hello world hello world";
    char symbol;
    int num;

    cout << "enter position to paste your symbol";
    cin >> num;

    cout << "Enter symbol to paste: ";
    cin >> symbol;

    removeAllChars(str, symbol, num);

    cout << "Result: " << str << endl;

    return 0;
}
