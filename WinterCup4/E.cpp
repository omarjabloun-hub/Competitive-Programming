
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

using ll = long long; // 10^18 2^64-1
using db = double;
using str = string;
using l = long; // 10^9 2^32-1
using ul = unsigned l;
using ull = unsigned ll;
using pi = pair<int, int>;
using pl = pair<ll, ll>;
using pd = pair<db, db>;

using vi = vector<int>;
using vb = vector<bool>;
using vl = vector<ll>;
using vd = vector<db>;
using vs = vector<str>;

using vpi = vector<pi>;
using vpl = vector<pl>;
using vpd = vector<pd>;

using wi = vector<vi>;

using mii = map<int, int>;
using si = set<int>;
using msi =multiset<int> ;

#define testi(ok)      \
    if (ok == true)    \
        cout << "YES"; \
    else               \
        cout << "NO";
#define init(a, b) memset(a, b, sizeof(a))
// loops

#define FOR(i, a, b) for (int(i) = (a); (i) < (b); ++(i))
#define REP(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int(i) = (b)-1; (i) >= (a); --(i))
#define PER(i, a) ROF(i, 0, a)
#define each(a, x) for (auto &a : x)

#define FORs(i, a, b, step) for (int i = a; i < b; i += step)
#define ROFs(i, a, b, step) for (int i = a; i >= b; b -= step)
#define foreach (it, v) for (auto it = it.begin(); it != v.end(); it++)

#define IN(a, b, c) assert(b <= a && a <= c)
#define pb push_back

#define mp make_pair
#define f first
#define s second

/*

ios::sync_with_stdio(0);
cin.tie(0);


freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
*/


const double PI = acos(-1.0);
const int MOD = 1e9 + 7;
const int MX = 2e5 + 5;
const ll INF = 1e18;

inline int aMin(int x, int y) { return ((y > x) ? x : y); }
inline int aMax(int x, int y) { return ((y < x) ? x : y); }

void printMatrix(int **M , int n){
    REP( i , n ){
        REP( j , n ){
            cout << M[i][j] ;
        }
        cout  << endl;
    }
}
int solve(int tc)
{
    //2 48
    int n ;
    cin >> n ;
    int sc = 0 ;
    int sr = 0 ;

    int C [n] ;
    int R [n] ;
    REP( i , n )  {
        cin >> C[i] ;
        sc+=C[i] ;
    }
    REP( i , n ){
        cin >> R[i] ;
        sr+=R[i] ;
    }
    if (sr != sc)
    {
        cout << (-1) << endl;
        return 0;
    }
    //print matrix
    //find 0 places
    // n*n grid all ones and modify it with (n*n)0

}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
       solve(tc) ;
    }

    return 0;
}