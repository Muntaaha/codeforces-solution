#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"I ";
        if(i%2==0){
            cout<<"hate ";
        }else{
            cout<<"love ";
        }
        if(n>1 && i!=n-1){
            cout<<"that ";
        }
    }
        cout<<"it ";

    return 0;
}
 