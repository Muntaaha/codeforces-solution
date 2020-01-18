#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t n,k,s=0,l=0;
    cin>>n>>k;
    s = n/k;
    if(s%2==0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}

