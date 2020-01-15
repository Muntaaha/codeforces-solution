#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int i,x,a_count=0,diff_count=0;
    string s;
    cin>>s;
    for(i=0;i<s.length();i++){
        if(s[i]=='a'){
            a_count += 1;
        }else{
            diff_count +=1;
        }
    }
    if(a_count>diff_count){
        cout<<s.length()<<endl;
    }else{
        x = diff_count - a_count;
        cout<<s.length()-x-1;
    }
    return 0;
}