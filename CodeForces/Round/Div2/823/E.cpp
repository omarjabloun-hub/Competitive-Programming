
#include <bits/stdc++.h>

using namespace std;

#define ll  long long  // 10^18 2^64-1

void no(){
    cout << "NO\n";

}
void yes(){
    cout << "YES\n" ;
}

#define init(a, b) memset(a, b, sizeof(a))
// loops

#define FOR(i, a, b) for (int(i) = (a); (i) < (b); ++(i))
#define REP(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int(i) = (b)-1; (i) >= (a); --(i))
#define PER(i, a) ROF(i, 0, a)
#define each(a, x) for (auto &a : x)

#define FORs(i, a, b, step) for (int i = a; i < b; i += step)
#define ROFs(i, a, b, step) for (int i = a; i >= b; b -= step)
#define foreach (it, v) for (auto it = v.begin(); it != v.end(); it++)

#define IN(a, b, c) assert(b <= a && a <= c)

/*

ios::sync_with_stdio(0);
cin.tie(0);


freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
*/

const double PI = acos(-1.0);
const int MOD = 1e9 + 7;
const int MX = 2e5 + 5;
const long long int INF = 1e18;


int main()
{
    int n, q; cin >> n >> q;
    int x, y, v;
    map<pair<int, int>, int> w_coor, b_coor;
    map<int, int> w_values, b_values;

    while (q--)
    {
        cin >> x >> y >> v;

        if((x + y) % 2 == 0) {
            if(v == 0 && w_coor.find(make_pair(x, y)) != w_coor.end()) {
                int last = w_coor[make_pair(x, y)];
                w_values[last]--;
                if(w_values[last] == 0) w_values.erase(last);
                w_coor.erase(make_pair(x, y));
            } else {
                if(w_coor.find(make_pair(x, y)) != w_coor.end()) {
                    int last = w_coor[make_pair(x, y)];
                    if(last != v) {
                        w_values[last]--;
                        if(w_values[last] == 0) w_values.erase(last);
                        w_values[v]++;
                    }
                } else {
                    w_values[v]++;
                }
                w_coor[make_pair(x, y)] = v;
            }
        } else {
            if(v == 0 && b_coor.find(make_pair(x, y)) != b_coor.end()) {
                int last = b_coor[make_pair(x, y)];
                b_values[last]--;
                if(b_values[last] == 0) b_values.erase(last);
                b_coor.erase(make_pair(x, y));
            } else {
                if(b_coor.find(make_pair(x, y)) != b_coor.end()) {
                    int last = b_coor[make_pair(x, y)];
                    if(last != v) {
                        b_values[last]--;
                        if(b_values[last] == 0) b_values.erase(last);
                        b_values[v]++;
                    }
                } else {
                    b_values[v]++;
                }
                b_coor[make_pair(x, y)] = v;
            }
        }

        if(w_values.size() <= 1 && b_values.size() <= 1) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}