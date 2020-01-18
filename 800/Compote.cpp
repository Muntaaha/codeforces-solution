#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,sum=0;
    cin>>a;
    cin>>b;
    cin>>c;
    while(a!=0){
        if(b>=2*a){
            sum= a+ 2*a ;
            if(c>=4*a){
                sum += a*4; break;
            }
            else{
                sum = 0;
            }
        }
        else{
            sum=0;
        }
        a--;
    }
    cout<<sum;
    return 0;
}

