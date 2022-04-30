
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

#define ll  long long // 10^18 2^64-1
#define db  double
#define str string
#define l long // 10^9 2^32-1
#define ul  unsigned l
#define ull unsigned ll
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


long long int pgcd ( long long int a,long long int b ) 
{ long long int r=0 ; 
while(b != 0)
    {
      r = a%b;
      a = b;
      b = r; 
    }
    return(a) ;
}
bool rev(str s ,int n){
        mii ma ;
        ma['0'] = '0' ;
        ma['1'] = '1' ;
        ma['2'] = '5' ;
        
       ma['5'] = '2' ;
        ma['6'] = '9' ;
        ma['8'] = '8' ;
        ma['9'] = '6' ;
        str s1=s;
        reverse(s.begin(), s.end());
       str ch= "" ;
        REP( i , n ){
            ch+=(char)ma[s[i]] ;
        }
        
        return ch == s1 ;
}
void affiche(int** M){
    REP( i , 4 ){
        REP( j , 4 ){
            cout << M[i][j] << endl;
        }
    }
}
int main()
{
    int tc;
    cin >> tc;
    
    while (tc--)
    { 
        str s ;
        int m[4][4]  ;
            char c;
            REP( i , 4 )
                REP( j , 4 ){
                    scanf("%c",&c) ;
                     fflush(stdin);
                    if (c == ' ')
                        m[i][j] = -1 ;
                    else
                     m[i][j] = (int) c ;
                    }
                affiche(m) ;
            
       

    }
    
    return 0;
}