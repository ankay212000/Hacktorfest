#include<iostream>
using namespace std;

int main()
{
    string s;
    1<=s.size()<=100;
    cin>>s;
    int count=0;
    int store=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A'&& s[i]<='Z')
        {
            count+=1;
        }
        else{
            store+=1;
        }
    }
    for(int i=0;i<s.size();i++)
    {
        if(count>store)
        {
           if(s[i]>='a'&& s[i]<='z')
           {
               s[i]-=32;
           }
        }
        if(count<=store)
        {
            if(s[i]>='A'&& s[i]<='Z')
            {
                s[i]+=32;
            }
        }
    }
    cout<<s;
}
