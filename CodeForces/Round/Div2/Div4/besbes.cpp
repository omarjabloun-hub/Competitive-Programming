#include "bits/stdc++.h"

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int min_x = INT_MAX, min_y = INT_MAX , max_x = INT_MIN, max_y = INT_MIN;
    int nb0=0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int x; cin >> x;
            if(x == 0) {
                if(i>max_x) max_x=i;
                if(i<min_x) min_x=i;
                if(j>max_y) max_y=j;
                if(j<min_y) min_y=j;
                nb0++;
            }
        }
    }

    if(nb0 > 9) {
        cout << "LOSE\n";
    } else if(nb0==0){cout << "WIN\n";} else {
       
        
        cout<<max_x<<" "<<min_x<<endl;
        cout<<max_y<<" "<<min_y<<endl;

        if((max_x - min_x > 2) ||(max_y - min_y > 2 )) {
            cout << "LOSE\n";
        }else {cout << "WIN\n" ;}

    }
    return 0;
}