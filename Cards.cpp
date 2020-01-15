#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,i,z_count=0,o_count=0,n_count=0,e_count=0,r_count=0,mn,a,b,z;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++){
        if(s[i] == 'z'){
            z_count += 1;
        }
        else if(s[i] == 'o'){
            o_count += 1;
        }
        else if(s[i] == 'n'){
            n_count += 1;
        }
        else if(s[i] == 'e'){
            e_count += 1;
        }
        else if(s[i] == 'r'){
            r_count += 1;
        }
        else{}
    }
    mn = o_count<n_count?o_count:n_count;
    mn = mn<e_count?mn:e_count;
    o_count -=mn;
    n_count -=mn;
    e_count -=mn;
 
    a = z_count<e_count?z_count:e_count;
    b = r_count<o_count?r_count:o_count;
    z = a<b?a:b;
    if(mn>0){
        while(mn--){
            cout<<"1"<<" ";
        }
    }
    if(z>0){
        while(z--){
            cout<<"0"<<" ";
        }
    }
 
 
    return 0;
}