#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,f=0,draw=0,s=0;
    cin>>a>>b;
    for(int i=1;i<=6;i++){
        int c = 0,d=0;
        if(a>i){c=a-i;}
        else{c=i-a;}
        if(b>i){d=b-i;}
        else{d=i-b;}
        if(c>d){s++;}
        else if(d>c){f++;}
        else{draw++;}
    }
    cout<<f<<" "<<draw<<" "<<s<<endl;
    return 0;
}
