#include <iostream>
using namespace std;

// ������� ��� ������� ������� � ����� � ������� �������
void insertChar(char str[], char ch, int position) {
    // ������ ������� �����
    int length = 0;
    while (str[length] != '\0') {
        ++length;
    }

    // ���������, �� ������� �����
    if (position < 0 || position > length) {
        cout << "Invalid position" << endl;
        return;
    }

    for (int i = length; i >= position; --i) {
        str[i + 1] = str[i];
    }

    str[position] = ch;
}

int main() {
    char str[] = "hello world hello world"; 
    cout << "String: " << str << endl;

    char symbol;
    int position;

    cout << "Enter position to insert your symbol: ";
    cin >> position;

    cout << "Enter symbol to insert: ";
    cin >> symbol;

    insertChar(str, symbol, position);

    cout << "Result: " << str << endl;

    return 0;
}
