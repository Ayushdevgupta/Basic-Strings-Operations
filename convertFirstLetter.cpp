// //WAP to input a string and convert the first letter of each word to uppercase.

#include<iostream>
using namespace std;

int main()
{
    char str[1000];
    cout << "Enter string" << endl;
    cin.getline(str, 1000);
    
    // Boolean flag to check if we are at the beginning of a word
    bool isNewWord = true;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            // We found a space, the next character will be the start of a new word
            isNewWord = true;
        } else if (isNewWord && str[i] >= 'a' && str[i] <= 'z') {
            // If it's the beginning of a word and the character is lowercase, convert to uppercase
            str[i] = str[i] - 32;
            isNewWord = false;
        } else {
            // Otherwise, continue as normal
            isNewWord = false;
        }
    }

    cout << str << endl;
    return 0;
}

