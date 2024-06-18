//WAP to input a string and remove all spaces from it
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[1000];
    cout<<"Enter a string"<<endl;
    cin.getline(str,1000);
    char a = ' ';
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == a)
        {
            for(int j = i; str[j] != '\0'; j++){
                  str[j] = str[j+1];

            }
        }
    }
    cout<<str;

    return 0;

}

