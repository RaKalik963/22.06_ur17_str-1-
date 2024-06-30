#include <iostream>
using namespace std;

void palidrom(char* str) {
	int len = 0;
	for (int i = 0; str[i] != '\0'; ++i) {
		len++;
	}

	bool isPalidrom = true;

	for (int i = 0; i < len / 2; i++) {
		if (str[i] != str[len - 1 - i]) {
			isPalidrom = false;
			break;
		}
	}

	if (isPalidrom) {
		cout << "The string is a palindrome." << endl;
	}
	else {
		cout << "The string is not a palindrome." << endl;
	}
}
int main() {
	char str[200];
	cout << "enter str ";
	cin.getline(str, 200);
	palidrom(str);

	return 0;
}