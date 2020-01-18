#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y,z,a,b,c;
    cin>>x>>y>>z;
    cin>>a>>b>>c;
    if(a>=x){
        a-=x;
        b+=a;
        if(b>=y){
            b-=y;
            c+=b;
            if(c>=z){
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
        }
        else{
            cout<<"NO";
        }
    }
    else{
        cout<<"NO";
    }

    return 0;
}


