#include <bits/stdc++.h>
using namespace std;

int main() {
    int q,i;
    cin>>q;
    long long int n,a,b,sum=0;
    for(i=0;i<q;i++){
        cin>>n>>a>>b;
        if(b<2*a){
            if(n%2==0){
                sum= (n/2)*b;
            }
            else{
                sum = ((n/2)*b)+a;
            }
        }
        else{
            sum = n*a;
        }
        cout<<sum<<endl;
    }

    return 0;
}
