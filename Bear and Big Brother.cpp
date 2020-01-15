#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,i;
    cin>>a>>b;
    for(i=1;i<101;i++){
        if(a*3 > b*2){
            cout<<i<<endl;
            break;
        }else{
            a *= 3;
            b *= 2;
        }
    }
    return 0;
}
 