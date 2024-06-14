//if you reverse the string it should give the same string
// #include<iostream>
// #include<cstring>

// using namespace std;
// int main()
// {
//     char str1[1000],str2[1000];
//     cout<<"Enter a String"<<endl;
//     cin>>str1;

//     int l = strlen(str1);
//     for(int i = l-1; i >= 0; i--)
//     {
//         str2[l-1-i] = str1[i];
//     }
//     str2[l] = '\0';
//     if(strcmp(str1,str2) == 0)
//     {
//         cout<<"Palindrome";
//     }
//     else
//     {
//         cout<<"Not Palindrome";
//     }
// }


#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    cout<<"Enter String"<<endl;
    cin>>str;
    int l = str.length();
    int low = 0;
    int high = l-1;
    while(low < high)
    {
        if(str[low] != str[high])
        {
            cout<<"Not a palindrome"<<endl;
            break;
            low ++;
            high --;
        }
      
            cout<<"palindrome"<<endl;
            break;
        
    }
        
}