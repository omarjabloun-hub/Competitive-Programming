#include "bits/stdc++.h"

using namespace std;
#define fr(i,a,b) for(int i=a;i<b;i++)
int xi[]={0,0,1,-1,1,1,-1,-1};
int yi[]={1,-1,0,0,1,-1,1,-1};
int main() {
    int n, m;
    cin >> n >> m;
    int t[n][m];
    int nb0=0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int x; cin >> x;
            t[i][j]=x;
            if(x == 0) nb0++;;
        }
    }
    fr(i,0,n){
        fr(j,0,m){
            if(t[i][j]==1){
                int nb0_near_me=0;
                fr(k,0,8){
                    int x=xi[k]+i,y=yi[k]+j;
                    if(x>=0 && y>=0 && x<n && y<m && t[x][y]==0 ) nb0_near_me++;
                }
                if(nb0_near_me==nb0) {
                    cout << "WIN\n";
                    return 0 ;
                }
            }
            
        }
    }
 
    cout << "LOSE\n";
    
}