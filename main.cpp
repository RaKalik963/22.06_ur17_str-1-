#include <iostream>
using namespace std;

int countOccurrences(const char* str, char symbol) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == symbol) {
            ++count;
        }
    }
    return count;
}

int main() {
    char str[100]; 
    cout << "Enter str: ";
    cin.getline(str, 100);

    char symbol;
    cout << "Enter symbol to find ";
    cin >> symbol;

    int count = countOccurrences(str, symbol);

    cout << "Result " << count << endl;

    return 0;
}
