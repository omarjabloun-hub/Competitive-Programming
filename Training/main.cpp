#include "bits/stdc++.h"

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int min_x = INT_MAX, min_y = INT_MAX , max_x = INT_MIN, max_y = INT_MIN;
    set<pair<int, int>> zeros;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int x; cin >> x;
            if(x == 0) {
                if(i>max_x) max_x=;

            }
        }
    }

    if(zeros.size() > 9) {
        cout << "LOSE\n";
    } else {

        for(auto elem : zeros){
            if(elem.first > max_x ){
                max_x = elem.first ;
            }
            if(elem.first < min_x){
                min_x = elem.first ;
            }

            if(elem.second > max_y ){
                max_y = elem.second ;
            }
            if(elem.second
                    < min_y){
                min_y = elem.second ;
            }
        }

        if((max_x - min_x > 2) ||(max_y - min_y > 2 )) {
            cout << "WIN\n" ;
        }else {cout << "LOSE\n";}

    }
    return 0;
}