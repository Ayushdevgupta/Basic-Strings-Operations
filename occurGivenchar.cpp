//input a string and count the number of occurence of a given character
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[1000];
    cout<<"enter a string"<<endl;
    cin>>str;
    char a;
    cout<<"enter a character"<<endl;
    cin>>a;
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == a)
        {
            count++;
        }

    }
    cout<<count;
    return 0;
}