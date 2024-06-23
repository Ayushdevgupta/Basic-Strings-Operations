// #include<iostream>
// #include<cstring>
// using namespace std;
// int getLongestWord(string str)
// {
//     int n = str.length();
//     int count = 0;
//     for(int i = 0; i < n; i++)
//     {
//         if(str[i] >= 'a' && str[i] <= 'z' && str[i] != ' ')
//         {
//              count++;
//         }
//     }
//     return count;

// }













// int main()
// {
//     string str;
//     cout<<"Enter string"<<endl;
//     getline(cin,str);
//     cout<<getLongestWord(str)<<endl;

// }
#include <iostream>
#include <string>
using namespace std;

string longestWord(const string& str) {
    int n = str.length();
    string longest;
    string current;

    for (int i = 0; i <= n; ++i) {
        if (i < n && str[i] != ' ') {
            current += str[i];
        } else {
            if (current.length() > longest.length()) {
                longest = current;
            }
            current = "";
        }
    }

    return longest;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "The longest word is: " << longestWord(str) << endl;
    return 0;
}
