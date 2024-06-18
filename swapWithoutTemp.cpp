//wap to input two characters and swap their values without using a temp variable
#include<iostream>
using namespace std;
int main()
{
    char a,b;
    cout<<"Enter first character";
    cin>>a;
    cout<<"Enter second character";
    cin>>b;
    a = a + b;
    b = a - b;
    a = a - b;
    
    cout<<"After Swapping "<<a<<','<<b<<endl;
    return 0;
}