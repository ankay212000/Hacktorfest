#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=0,y=0,z=0,x1,y1,z1;
    while(n--)
    {
        cin>>x1>>y1>>z1;
        x=x+x1;
        y=y+y1;
        z=z+z1;
    }
  if(x==0&&y==0)
  {
      if(z==0)
      cout<<"YES"<<"\n";
      else
      cout<<"NO"<<"\n";
  }
  else
  cout<<"NO"<<"\n";
}