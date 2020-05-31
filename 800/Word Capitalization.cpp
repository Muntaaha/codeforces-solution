#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    char c;
    int m = int(s[0]);
    if(m>96){
        c = char(m-32);
        s[0]=c;
    }
    cout<<s;
    return 0;
}
 
