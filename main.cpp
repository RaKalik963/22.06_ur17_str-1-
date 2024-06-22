#include <iostream>
using namespace std;



int main() {
    char str[] = "hello world hello world hello world hello world";

    int word_count = 0;
    bool in_word = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            in_word = false;
        }
        else {
            if (!in_word) {
                word_count++;
                in_word = true;
            }
        }
    }

    cout << "Amount of words = " << word_count << endl;

	system("pause");
	return 0;
}