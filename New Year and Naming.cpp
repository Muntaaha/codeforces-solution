#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int m,n,i,x,j,k,a;
    cin>>m>>n;
    string s1[m],s2[n];
 
    for(i=0;i<=m-1;i++){
        cin>>s1[i];
    }
 
    for(i=0;i<=n-1;i++){
        cin>>s2[i];
    }
 
    cin>>x;
    while(x--){
        cin>>a;
        j = (a-1)%m;
        k = (a-1)%n;
        cout<<s1[j] + s2[k]<<endl;
    }
    
    return 0;
}