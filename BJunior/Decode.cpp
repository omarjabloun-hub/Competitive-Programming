
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>

#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include <list>
#include <stack>
#include <map>
#include <set>

using namespace std;

#define ll  long long int  // 10^18 2^64-1
#define db  double
#define str string
#define l long // 10^9 2^32-1
#define ul  unsigned long int
#define ull unsigned long long int
#define pi  pair<int, int>
#define pl  pair<ll, ll>
#define pd  pair<db, db>

#define vi  vector<int>
#define vb  vector<bool>
#define vl  vector<ll>
#define vd  vector<db>
#define vs  vector<str>

#define vpi vector<pi>
#define vpl vector<pl>
#define vpd vector<pd>

#define wi  vector<vi>

#define mii map<char, char>
#define si  set<int>
#define msi multiset<int> 

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
const long long int INF = 1e18;

inline int aMin(int x, int y) { return ((y > x) ? x : y); }
inline int aMax(int x, int y) { return ((y < x) ? x : y); }


ll pgcd ( ll a, ll b ) 
{  ll r=0 ; 
while(b != 0)
    {
      r = a%b;
      a = b;
      b = r; 
    }
    return(a) ;
}
str Code(str toCode){
    if (toCode.length()<= 1)
    {
        return toCode ;
    }
    int n= toCode.length() ;
   char firstCharacter =toCode[n / 2 + n % 2 - 1] ;
//    cout << firstCharacter << n / 2 + n % 2 - 1 << endl;
    // cout << toCode.substr(0 , n / 2 + n % 2 - 1 ) << endl;
    return ( firstCharacter + Code(toCode.substr(0 , n / 2 + n % 2-1 )+toCode.substr(n / 2 + n % 2  , n)));
    
}
int main()
{
    int n;
    cin >> n ;
    char code ;
    str ans = "" ;
    // if (n == 1 || n == 2 )
    // {
    //     REP( i , n ){
    //         cin >> code ;
    //         ans += code ;
    //     }
    // cout << ans << endl;
    // cout << Code(ans) << endl;

    // return 0 ;
    // }
    REP( i , n ){
        cin >> code ;
        if(n % 2 == 0 ){
        if (i % 2 == 0 )
        {
            ans = code + ans ;
        }else
            ans =  ans + code ;
        }else 
        if (i % 2 == 1 )
        {
            ans = code + ans ;
        }else
            ans =  ans + code ;   
    }

        cout << ans << endl;
    //cout << Code(ans) << endl;

    
    return 0;
}