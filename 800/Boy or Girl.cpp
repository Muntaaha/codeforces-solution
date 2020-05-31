#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int m,c=0,i;
    cin>>s;
    sort(s.begin(),s.end());
    m = s.length();
    for(i=0;i<m;i++){
        if(s[i]!=s[i+1]){
            c++;
        }
    }
    if(c%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
 
