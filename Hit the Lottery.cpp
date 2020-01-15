#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,a=0,sum = 0;
    cin>>n;
    while(n!=0){
        if(n>=100){
            a = n/100;
            sum += a;
            n = n%100;
        }
        else if(n>=20){
            a = n/20;
            sum += a;
            n = n%20;
        }
        else if(n>=10){
            a = n/10;
            sum += a;
            n = n%10;
        }
        else if(n>=5){
            a = n/5;
            sum += a;
            n = n%5;
        }
        else if(n>=1){
            a = n;
            sum += a;
            n=0;
        }
    }
    cout<<sum<<endl;
}