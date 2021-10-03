#include<iostream>
using namespace std;

int main()
{
    int loop;
    int n;
    cin>>n>>loop;
    string s;
    cin>>s;
    while(loop--)
    {
        int i=1;
        while(i<n)
        {
            
            if(s[i-1]=='B' && s[i]=='G')
            {
                char temp=s[i-1];
                s[i-1]=s[i];
                s[i]=temp;
                i+=2;
                
            }
            if(s[i-1]=='G' && s[i]=='B')
            {
                
                i++;
            }
            if(s[i-1]=='G'&& s[i]=='G')
            {
                i++;
            }
            if(s[i-1]=='B'&& s[i]=='B')
            {
                i++;
            }

        }
        

    }  
    cout<<s; 
}
