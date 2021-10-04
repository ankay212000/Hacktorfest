#include<iostream>
using namespace std;


int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int count=a;
    int store=a;
    while(a>0)
    {
        if(b>0)
        {
            b=b-1;
            count-=1;
        }
        if(c>0)
        {   
            c=c-1;
            store-=1;
        }
        a--;
    }
    if(count==0 && store==0)
    {
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
    
    
    
    
    

}
