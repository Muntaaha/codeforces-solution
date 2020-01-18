#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,i,j,k,l,a,b,c=0,d=0;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cin>>m;
    int B[m];
    for(int i=0;i<m;i++){
        cin>>B[i];
    }
    for(i=0;i<n;i++){
        a = A[i];
        for(j=0;j<n;j++){
            b = B[j];
            for(k=0;k<n;k++){
                if(A[k]==a+b){
                    break;
                }
                else{
                    c = 1;
                }
            }
            for(k=0;k<n;k++){
                if(B[k]==a+b){
                    break;
                }
                else{
                    d = 1;
                }
            }
            if(c==1 && d==1){
               break;
            }
        }
        if(c==1 && d==1){
            cout<<a<<" "<<b<<endl; break;
        }
    }
    return 0;
}
