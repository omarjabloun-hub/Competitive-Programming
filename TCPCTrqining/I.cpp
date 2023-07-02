#include "bits/stdc++.h"

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    set<pair<int, int>> zeros;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int x; cin >> x;
            if(x == 0) zeros.insert(make_pair(i, j));
        }
    }

    if(zeros.size() > 9) {
        cout << "LOSE\n";
    } else {
        int min_x, min_y, max_x, max_y;
        int minSet = zeros[0];

    }
}