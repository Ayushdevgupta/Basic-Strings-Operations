//wap to convert first letter of each word to lower case
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[1000];
    cout<<"Enter string"<<endl;
    cin.getline(str,1000);
    bool isNewWord = true;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {  
            isNewWord = true;
        }
        else if(isNewWord && str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
            isNewWord = false;
        }
        else{
            isNewWord = false;
        }
        
    }
    cout<<str;
    return 0;
    
}