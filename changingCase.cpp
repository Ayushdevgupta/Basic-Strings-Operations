//Change case from upper to lower
// #include<iostream>
// using namespace std;
// int main()
// {
//     string str = "AYUmH";
//     for(int i = 0; str[i] !='\0';i++)
//     {
//         if(str[i] >= 65 && str[i] <= 90)
//         str[i] = str[i] + 32;
//     }
//     cout<<str<<endl;
//     return 0;
// }

//change case to upper case
#include<iostream>
using namespace std;
int main()
{
    string str = "ayush";
    for(int i = 0; str[i] !='\0';i++)
    {
        if(str[i] >= 97 && str[i] <= 122)
        str[i] = str[i] - 32;
    }
    cout<<str<<endl;
    return 0;
}