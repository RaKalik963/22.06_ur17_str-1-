#include <iostream>
using namespace std;

void removeAllChars(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    int j = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] != ' ') {
            str[i] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];

    cout << "Enter symbol to paste: ";
    cin >> str;

    removeAllChars(str);

    cout << "Result: " << str << endl;

    return 0;
}
