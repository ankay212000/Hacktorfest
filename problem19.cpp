#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

map <string,string> mp; 
int main(){
    mp["purple"] = "Power";
    mp["green"] = "Time";
    mp["blue"] = "Space";
    mp["orange"] = "Soul";
    mp["red"] = "Reality";
    mp["yellow"] = "Mind";
    int n;
    cin >> n;
    int tc = n;
    while(n--){
        string s;
        cin >> s;
        mp[s] = "";
    }
    cout << 6-tc << endl;
    for(auto tc:mp){
        if(tc.second != ""){
            cout << tc.second << endl;
        }
    }
    return 0;
}
