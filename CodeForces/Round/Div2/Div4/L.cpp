#include "bits/stdc++.h"

using namespace std;
#define fr(i,a,b) for(int i=a;i<b;i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    //cin>>n;
    //cout<<pow(2,n+2)-3<<endl;
    // int i=0;
    // while((pow(2,i+2+1)-3)<n) i++;
    // cout<<i+1<<endl;
    int nbP = 0;
    freopen("myoutput","w",stdout);
    fr(n,0,20001){
        int nb=0;
        fr(k,0,n+1){
            fr(j,0,n+1){
                if((k*k+j*j)<=n*n) {nb++;
                    //cout<<k<<" "<<j<<endl;
                }
            }
        }
        //cout<<nb-nbP<<endl;
        nb=nb*4-4*(n-1)-3-4;
        cout<< nb<<",";
        if(nb>1000000000) {
            cout<<"this is the size of the table : "<<n+1;
            return 0;
        }
        //nbP =nb;
    }
    
}