#include <iostream>
using namespace std;

void replace_dots(char* str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == '.') {
            str[i] = '!';
        }
    }
}

int main() {
    char str[100]; 
    cout << "Enter str: ";
    cin.getline(str, 100);

    replace_dots(str);

    cout << "Result: " << str << endl;

    return 0;
}
