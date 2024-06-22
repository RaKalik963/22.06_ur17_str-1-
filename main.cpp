#include <iostream>
using namespace std;

void removeAllChars(char str[], char symbol) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    int j = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] != symbol) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[] = "hello world hello world";
    char symbol;

    cout << "Enter symbol to delete: ";
    cin >> symbol;

    removeAllChars(str, symbol);

    cout << "Result: " << str << endl;

    return 0;
}
