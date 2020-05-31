#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,s,k,i,x,y,c,d,h;
    cin>>t;
    for(i=0;i<t;i++){
        c=-1;d=-1;
        cin>>n>>s>>k;
        int a[k],j;
        for(j=0;j<k;j++){
            cin>>a[j];
        }
        for(x=s;x>0;x--){ h=0;
            for(y=0;y<k;y++){
                if(x!=a[y]){
                    //cout<<"CCC"<<" "<<a[y]<<endl;
                    h++;
                }
                else{
                    h =0;
                    break;
                }
            }
            if(h>0){
                c =s-x;
                break;
            }
        }
        for(x=s;x<n+1;x++){ h =0;
            for(y=0;y<k;y++){
                if(x!=a[y]){
                    //cout<<"CCC"<<" "<<a[y]<<endl;
                    h++;
                }
                else{
                    h =0;
                    break;
                }
            }
            if(h>0){
                d =x-s;
                break;
            }
        }
        //cout<<c<<endl;
        //cout<<d<<endl;
        if(c<=d){
            if(c>=0){
                cout<<c<<endl;
            }
            else{
                cout<<d<<endl;
            }
        }
        else if(d<=c){
            if(d>=0){
                cout<<d<<endl;
            }
            else{
                cout<<c<<endl;
            }
        }
    }

    return 0;
}

