//wap to find the frequency of each character in it
////Naive approach
#include<iostream>
#include<cstring>
using namespace std;

void getEachFreq(string str)
{
    int n = str.length();
    for(int i = 0; i < n; i++)
    {
        int count = 0;
        
        for(int j = 0; j < n; j++)
        {
            if(str[i] == str[j] )
            {
                count++;
            }
        }
        cout<<"Frequncy of "<<str[i]<<" is "<<count<<endl;
    }
}



int main()
{
    string str = "test";
    getEachFreq(str);
    return 0;

}