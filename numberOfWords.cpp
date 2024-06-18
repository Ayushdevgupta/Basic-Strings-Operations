#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[1000];
    cout << "Enter a string:" << endl;
    cin.getline(str, 1000);

    int count = 0;
    bool inWord = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && !inWord) {
            inWord = true;
            count++;
        } else if (str[i] == ' ') {
            inWord = false;
        }
    }

    cout << "Number of words: " << count << endl;
    return 0;
}
