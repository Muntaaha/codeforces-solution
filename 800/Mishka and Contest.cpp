#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,m=0,i,x;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<=k){
            m++; //cout<<a[i]<<endl;
        }
        else{
            x = i;
            break;
        }
    }
    if(x<n-1){
        for(int i=n-1;i>x;i--){

            if(a[i]<=k){
                m++; //cout<<a[i]<<endl;
            }
            else{
                break;
            }
        }
    }
    cout<<m<<endl;

    return 0;
}
