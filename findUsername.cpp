// #include<iostream>
// #include<cstring>
// using namespace std;
// int main()
// {
//     string str = "john123@gmail.com";
//     char c ='@';
//     for(int i = 0; str[i] != '\0'; i++)
//     {
//         if(str[i] == c)
//         {
//            break;
//         }
//         else{
//             cout<<str[i];
//         }
        
//     }
//     return 0;

// }

//Username is valid or not 
#include<iostream>
#include<cstring>
using namespace std;

int main() {
    string email = "ayush123@gmail.com";
    bool isValid = true;

    for(int i = 0; email[i] != '\0'; i++) {
        if((email[i] >= 'A' && email[i] <= 'Z') || (email[i] >= 'a' && email[i] <= 'z') || 
           (email[i] >= '0' && email[i] <= '9') || email[i] == '_' || email[i] == '.' || email[i] == '@') {
            // Characters are valid
        } else {
            isValid = false;
            break;
        }
    }

    if(isValid) {
        cout << "Valid" << endl;
    } else {
        cout << "Not Valid" << endl;
    }

    return 0;
}
