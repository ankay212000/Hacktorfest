#include<iostream>
using namespace std;

int main()
{
    string s;
    s.size()<=10^3;
    cin>>s;

    if(s[0]>='a' && s[0]<='z')
    {
        s[0]-=32;
    }
    cout<<s;
}
