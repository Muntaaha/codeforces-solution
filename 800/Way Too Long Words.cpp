#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,j,m,x;
    cin>>n;
    string s="",v="";
    for(i=0;i<n;i++){
        cin>>s;
        m = s.length();
        if(m>10){
            x = m-2;
            stringstream ss;
            ss<<x;
            string st;
            ss>>st;
            v = s[0]+st+s[m-1];
            cout<<v<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;
}
 
