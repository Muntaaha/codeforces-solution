#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b,c,x;
    cin>>n;
    x = n/3;
    if(x%3!=0){
        a =x;
        b=x;
        c=n-a-b;
        if(c%3==0){
            c --;
            b++;
        }
    }
    else{
        a = x-1;
        b = x-1;
        c = n-a-b;
        if(c%3==0){
            c --;
            b++;
        }
    }
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}
