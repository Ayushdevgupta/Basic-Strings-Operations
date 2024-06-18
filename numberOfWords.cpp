#include<iostream>
using namespace std;
int main()
{
    char str[1000];
    cout<<"Enter a string"<<endl;
    cin>>str;
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >='a' && str[i] <='z'))
        {
            count++;
        }
    }
    cout<<count<<endl;
}