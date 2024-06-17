//wap to input two strings and concatenate  them
//taking string object
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main()
// {
//     string str1;
//     string str2;
//     string str3;
//     cout<<"Enter first string"<<endl;
//     cin>>str1;
//     cout<<"Enter second string"<<endl;
//     cin>>str2;
//     str3 = str1 + str2;
//     cout<<str3;
//     return 0;


    



// }
//taking character array
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str1[1000];
    char str2[1000];
    cout<<"enter first string"<<endl;
    cin>>str1;
    cout<<"enter second string"<<endl;
    cin>>str2;
    strcat(str1,str2);
    cout<<str1<<endl;
    return 0;
}
