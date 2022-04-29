/*
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

#include <bits\stdc++.h>
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







const double PI = acos(-1.0);
const int MOD = 1e9 + 7;
const int MX = 2e5 + 5;
const ll INF = 1e18;

inline int aMin(int x, int y) { return ((y > x) ? x : y); }
inline int aMax(int x, int y) { return ((y < x) ? x : y); }

int solve(int tc)
{
    int n ;
    cin >> n ;
    ci
    REP( i , n)   
    return ;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        
    }

    return 0;
}

//hah
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include <map>
int main()
{
   int n;
   cin >> n;
   int x, j, prev, k = 0,n1=n;
   int T[n];
   for (int i = 1; i <= n; i++)
   {
       T[i]=0 ; 
   }
   for (int i = n; i >=1; i++)
   {
      cin >> x;
      if (x ==n1)
      {
         T[k] = x;
 
         sort(T, T + n);
         reverse(T, T + n);
         j = 0;
         prev = T[j];

         while (T[j] == prev && j <= n && prev >= 1)
         {
            cout << T[j] << " ";
            T[j] = 0;
            prev--;
            j++;
         }
         k++;
         n1=n1-j; 
      }
      else
      {
         T[k] = x;
         sort(T, T + k);
         reverse(T, T + k);
         k++;

      }
       cout << endl;
   }
 
   return 0;
}
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include <map>
#include <set> 





int main()
{
  int n;
  cin >> n ;
  int t[n] ; 

  for(int i=0;i<n;i++) 
  { 
    cin>>t[i] ; 
  }
  int ok=0 ; 
   sort(t,t+n) ; 
   reverse(t,t+n) ;
   int prefixSum [n] ;
    for (int i = 0; i < n; i++)
        {prefixSum[i] = prefixSum[i - 1] + t[i];

        }
    for (int i = 0; i < n-1; i++)
        {
     if (prefixSum[i]>(prefixSum[n-1]-prefixSum[i]))      {
     cout<<i+1 ; 
     ok=1 ; 

     break ; 
     } 

        }
        if (ok==0 )cout<<n; 

  return 0;
}