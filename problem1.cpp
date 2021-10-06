#include<iostream>//dynamic array
using namespace std;

int main()
{
    int n;
    cin>>n;
    int** arr=new int*[n];//create 2d array
    for(int i=0;i<n;i++)
    {
        int* a=new int[3];//ab uske andr array aise define krte hai
        for(int j=0;j<3;j++)
        {
            cin>>a[j];
        }
        *(arr+i)=a;
    }
   
    bool flag=0;
    int i=0;
    for(int j=0;j<3;j++)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        sum+=arr[i][j];

        if(sum==0)
        {
            flag=1;
        }
        else{
            cout<<"NO"<<endl;
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }    
    
    
}
