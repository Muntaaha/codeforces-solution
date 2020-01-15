#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,i,ans=0;
    cin>>n;
    int a;
    for(i=0;i<n;i++){
        cin>>a;
        if(a<=2){
            ans = 4-a;
        }else{
            ans=a%2;
        }
 
        cout<<ans<<endl;
    }
}
 