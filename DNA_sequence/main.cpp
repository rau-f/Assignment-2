#include <iostream>
using namespace std;

// This is actually not main file. check main2

int main() 
{
    string str;
    cin>>str;
    int final_appear=0,appeared=1,size=str.length()-1;

    for (int i=0;i<size;i++)
    {
        if (str[i]==str[i+1])
         {
             appeared++;
         }
        if (str[i]!=str[i+1])
        {
            if (final_appear<appeared)
            {
                final_appear=appeared;
            }
            appeared=1;
         }   
    }
    if (final_appear<appeared)
    {
        final_appear=appeared;
     }
    cout<<final_appear<<endl;
    return 0;
}