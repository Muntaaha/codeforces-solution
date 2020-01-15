#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,cnt=0;
    cin>>n;
    for(i=n-1;i>0;i--){
        if(n%i==0){
            cnt+=1;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
 