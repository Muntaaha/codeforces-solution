#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,i;
    cin>>n;
    string s;
    while(n--){
        cin>>s;
        if(s.substr( s.length() - 2 ) == "po"){
            cout<<"FILIPINO"<<endl;
        }
        else if(s.substr( s.length() - 4 ) == "desu" || s.substr( s.length() - 4 ) == "masu"){
            cout<<"JAPANESE"<<endl;
        }
        else if(s.substr( s.length() - 5 ) == "mnida"){
            cout<<"KOREAN"<<endl;
        }
        else{
            cout<<"Language Do not exist"<<endl;
        }
    }
    return 0;
}