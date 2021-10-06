#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,o;
    char s[m];
    cin>>m>>o;
    for(int i=1;i<m+1;i++)
    {
        cin>>s[i];
    }

    for(int i=1;i<=o;i++)
    {
        int l,r;
        char c,d;
        cin>>l>>r>>c>>d;
        for(int i=l;i<=r;i++)
        {
            if(s[i]==c)
            s[i]=d;
        }
    }
    for(int i=1;i<m+1;i++)
    {
        cout<<s[i];
    }
    
}
