#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,i,s=0;
    cin>>n;
    int arr[n];
 
    for(i=0;i<=n-1;i++){
        cin>>arr[i];
        s+=arr[i];
    }
    if(s>0){
        cout<<"HARD"<<endl;
    }else{
        cout<<"EASY"<<endl;
    }
 
    return 0;
}