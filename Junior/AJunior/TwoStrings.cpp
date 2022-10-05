
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
    string a , b ;
    vi indexes ;
    int eqIndexe = -1;
    void f(int start , int end , int nb ){
        // cout << "**********" << endl;
        // cout << a << endl ;
        // cout << b << endl ;
        // cout << start << endl ;
        // cout << nb << endl ;
        // cout << "INDEXES : " << endl ;
        // for (auto it = indexes.begin(); it != indexes.end(); it++)
        //     cout << *it << endl;

        // cout << "**********" << endl;

        // if I found two letters to swap so a[x] > b[x] and a[y] > b[y]
        if (nb==0 )
        {
            cout << "YES" << endl;
            cout << indexes[0]+1 << " " << indexes[1]+1 << endl;
            return ;
        }
        //  if I found two letters to swap where a[x] == b[x] and a[y] > b[y]
        // in this case we print the first equal letter and the index of the greater letter

        if(nb == 1 && eqIndexe >=0 && a > b && start >= end){

            cout << "YES" << endl;
            cout << eqIndexe+1 << " " << indexes[0]+1 << endl;
            return ;

        }
        if (start >= end && nb > 0){
            cout << "NO" << endl;
            return ;
        }
        if(a[start] == b[start] ){
            eqIndexe = start ;
        }
        if (a[start] >= b[start]){
            if(a > b && start != 0){

                indexes.push_back(start);
                swap(a[start],b[start]) ;

                f(start+1, end , nb-1);
                return ;

            }else{
                f(start+1, end , nb);

            }
        }
        if (a[start] < b[start]){

            indexes.push_back(start);
            swap(a[start],b[start]) ;

            f(start+1, end , nb-1);
            return ;

        }
        return ;

    }
int main()
{
    
        int n ; 
        cin >> n ;
        cin >> a >> b ;
        

        f(0,n,2) ; 
    
    return 0;
}