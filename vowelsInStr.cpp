// #include<iostream>
// using namespace std;
// int main()
// {
//     string str = "how Many wOrds";
//     int vowel = 0,consonant = 0, space = 0;
//     for(int i = 0; str[i] != '\0'; i++)
//     {
//         if(str[i] == 'A' ||str[i] == 'E' ||str[i] == 'I' ||str[i] == 'O' ||str[i] == 'U' ||
//         str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u' )
//         {
//             vowel++;
//         }
//         else if(str[i] == ' ')
//         {
//             space++;
//         }
//         else
//         {
//             consonant++;
//         }

//     }
//     cout<<"Vowels "<<vowel<<endl;
//     cout<<"Consonant "<<consonant<<endl;
//     cout<<"words "<<space+1<<endl;
//     return 0;
// }

/*handling multiple spaces in string and we should not 
count special character as consonant*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     string str = "how     ayush     Many";
//     int vowels = 0,consonant = 0,words = 0;
//     bool inWord = false;
//     for(int i = 0; str[i] != '\0'; i++)
//     {
//         if(str[i] == 'A' ||str[i] == 'E' ||str[i] == 'I' ||str[i] == 'O' ||str[i] == 'U' ||
//         str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u' )
//         {
//             vowels++;
//         }
//         else if(str[i] == ' ')
//         {
//             words++;
//             if(words == 1)
//             {
//                 // inWord = true;
//                 break;
//             }            
//         }


//     }
//     cout<<"vowels are "<<vowels<<endl;
//     cout<<"words are "<<words+1<<endl;
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    string str = "how       Many Words-7";
    int vowels = 0, consonants = 0, words = 0;
    bool inWord = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowels++;
            inWord = true;
        } else if (str[i] == ' ') {
            inWord = false;
        } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            consonants++;
            inWord = true;
        }
        
        // Detect word transitions
        if ((i == 0 || str[i-1] == ' ') && str[i] != ' ' && ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) {
            words++;
        }
    }

    cout << "Vowels are: " << vowels << endl;
    cout << "Consonants are: " << consonants << endl;
    cout << "Words are: " << words << endl;

    return 0;
}

