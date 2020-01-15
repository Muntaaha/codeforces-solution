#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,s_count=0,f_count=0;
    cin>>n;
    string s;
    cin>>s;

    for(i=0;i<n-1;i++){
        if(s[i]=='S' && s[i+1]=='F'){
            s_count += 1;
        }

        if(s[i]=='F' && s[i+1]=='S'){
            f_count += 1;
        }
    }
    if(s_count>f_count){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
 