#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,k,i;
    cin>>n>>k;
    if(n>=2 && n<=1000000000 && k>=1 && k<=50){
        for(i=0;i<k;i++){
            if(n%10 == 0){
                n = n/10;
            }else{
                n =n-1;
            }
        }
    }
    cout<<n<<endl;
    return 0;
}
 