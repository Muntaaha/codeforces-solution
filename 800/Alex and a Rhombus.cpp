#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,sum=0;
    cin>>n;
    sum = n+(n-1);
    n--;
    while(n!=0){
        sum += (n+(n-1))*2;
        n--;
    }
    cout<<sum<<endl;
    return 0;
}
