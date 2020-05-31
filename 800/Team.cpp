#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,a,b,c,m=0,o=0;
    cin>>n;
    for(i=0;i<n;i++){
        m=0;
        cin>>a>>b>>c;
        if(a==1){
            m+=1;
        }
        if(b==1){
            m+=1;
        }
        if(c==1){
            m+=1;
        }
        if(m>=2){
            o++;
        }
    }
    cout<<o<<endl;
    return 0;
}
 
