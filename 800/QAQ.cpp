#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,j,k,c=0;
    string s;
    cin>>s;
    int n = s.length();
    for(i=0;i<n;i++){
        if(s[i]=='Q'){
            for(j=i+1;j<n;j++){
                if(s[j]=='A'){
                    for(k=j+1;k<n;k++){
                        if(s[k]=='Q'){
                            c++;
                        }
                    }
                }
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
