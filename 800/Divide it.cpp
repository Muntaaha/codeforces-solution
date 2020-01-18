#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t q,i,n,m=0;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>n;
        m = 0;
        while(n>=0){
            if(n==0){
                m = -1;
                break;
            }
            else if(n==1){
                break;
            }
            else if(n%5==0){
                n = (4*n)/5; m++;
            }
            else if(n%3==0){
                n = (2*n)/3; m++;
            }
            else if(n%2==0){
                n = n/2;  m++;
            }
            else{
                m = -1; break;
            }
        }
        cout<<m<<endl;
    }

    return 0;
}

