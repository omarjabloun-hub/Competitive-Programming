
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
{int tc ;
cin >> tc ;
while (tc--)
{
    int n , c ; cin >> n >> c ;
    map<int ,int> m ;
    REP( i , n ){
        int x ; cin >> x ;
        m[x] ++ ;
    }
    int s = 0 ;
    for(auto el : m ){
        s+=(c>el.second)? el.second : c ;
    }
    cout << s << endl;
}

    
    return 0;
}