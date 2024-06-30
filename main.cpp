#include <iostream>
using namespace std;

void countCharacters(const char* str, int& letters, int& numbers, int& others) {
    letters = 0;
    numbers = 0;
    others = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            ++letters;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            ++numbers;
        }
        else {
            ++others;
        }
    }
}

int main() {
    char str [] = "To verify that a character is a number, you don't need to compare it with all 10 digits, just compare the character code with the range of digit codes. 1914-1918, 1939-1945.";

    int letters, numbers, others;
    countCharacters(str, letters, numbers, others);

    cout << "Amount of letters: " << letters << endl;
    cout << "Amount of numbers: " << numbers << endl;
    cout << "Amount of other symbols: " << others << endl;

    return 0;
}
