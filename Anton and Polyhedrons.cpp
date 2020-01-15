#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,t=0;
    cin>>n;
    for(i=0;i<n;i++){
        string s;
        cin>>s;
        if(s=="Tetrahedron"){
            t+=4;
        }
        else if(s=="Cube"){
            t+=6;
        }
        else if(s=="Octahedron"){
            t+=8;
        }
        else if(s=="Dodecahedron"){
            t+=12;
        }
        else if(s=="Icosahedron"){
            t+=20;
        }
        else{
            t+=0;
        }
    }
    cout<<t;

    return 0;
}
 