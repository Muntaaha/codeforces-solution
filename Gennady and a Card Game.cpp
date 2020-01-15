#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int i;
    string str,s,ans;
    cin>>str;
    for(i=0;i<5;i++){
        cin>>s;
        if(str[0]==s[0] || str[1]==s[1]){
            ans = "YES";
            break;
        }else{
            ans = "NO";
        }
    }
    cout<<ans<<endl;
 
 
    return 0;
}