#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,j,n,li=0,lj=0,cnt=0;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            cin>>n;
            if(n==1){
                li = i;
                lj =j;
            }
        }
    }
    if(li>3){
        cnt += li - 3;
    }
    else if(li<3){
        cnt += 3 - li;
    }
    else{
        cnt += 0;
    }

    if(lj>3){
        cnt += lj - 3;
    }
    else if(lj<3){
        cnt += 3 - lj;
    }
    else{
        cnt += 0;
    }

    cout<<cnt;
    return 0;
}
 
