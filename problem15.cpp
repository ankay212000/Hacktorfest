#include<iostream>
using namespace std;

int main(){
    int participants,pens,notebooks;
    cin>>participants;
    cin>>pens;
    cin>>notebooks;
    if(participants <= pens && participants <= notebooks)
        cout<<"YES";
        else
        cout<<"NO";
}