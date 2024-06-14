//////USING FOR LOOP
#include<iostream>
using namespace std;
int main()
{
    string str = "WELCOME";
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    cout<<"Length is "<<count<<endl;
    return 0;

}

////USING ITERATOR
// #include<iostream>
// using namespace std;
// int main()
// {
//     string str = "GUPTAJI";
//     string::iterator it;
//     int count = 0;
//     for(it = str.begin();it != str.end(); it++){
//         count++;
    
//     }
//     cout<<"Length is "<<count<<endl;
// }