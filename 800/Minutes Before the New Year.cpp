#include <bits/stdc++.h>
using namespace std;

int main() {
    int h,m,n,c;
    cin>>c;
    for(int i=0;i<c;i++){
        cin>>h>>m;
        if(m>0){
            m= 60-m;
            h = h+1;
        }
        //if(h<24){
            h = 24-h;
        //}
        n = (h*60)+m;
        cout<<n<<endl;
    }
    return 0;
}

