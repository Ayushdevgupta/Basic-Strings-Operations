#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[1000];
    char str2[1000];
    cout<<"Enter first string"<<endl;
    cin>>str;
    cout<<"Enter second string"<<endl;
    cin>>str2;
    int result = strcmp(str,str2);
    if(result == 0)
    {
        cout<<"Equal"<<endl;
    }
    else{
        cout<<"Not equal"<<endl;
    }
    return 0;

}