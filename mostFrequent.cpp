//wap to find the most frequent character in it
////Naive approach
#include <iostream>
#include <string>
using namespace std;

char getMaxOccurringChar(string str) {
    int n = str.length();
    int maxCount = 0;
    char maxChar;

    for (int i = 0; i < n; ++i) {
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxChar = str[i];
        }
    }

    return maxChar;
}

int main() {
    string str = "test";
    cout << "Maximum occurring character: " << getMaxOccurringChar(str) << endl;
    return 0;
}
