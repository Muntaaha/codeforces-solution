#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,x=0,y=0,z=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(i%3==0){
            x += a[i];
        }
        else if(i%3==1){
            y += a[i];
        }
        else if(i%3==2){
            z += a[i];
        }
    }
    if(x>y && x>z){
        cout<<"chest";
    }
    if(y>x && y>z){
        cout<<"biceps";
    }
    if(z>x && z>y){
        cout<<"back";
    }
    return 0;
}
