
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#include <iterator>



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

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

int main()
{
  // freopen("input.txt", "r", stdin);

    int tc;
    cin >> tc;
    
    while (tc--)
    { 
        string s ; cin >> s ;
        vector<pair<char  , int>> arr (0) ;
        int nb = 2 ;
        

        FOR( i ,1, s.length() -1){

            if (s[0] >  s[s.length() -1] && (s[i] > s[s.length() -1] && s[i] < s[0])
            || s[0] <  s[s.length() -1] && (s[i] < s[s.length() -1] && s[i] > s[0])
            || s[i] == s[0] || s[i] == s[s.length()-1]
            )
            {
                
               arr.push_back(make_pair(s[i] , i+1)) ;

                
                nb++ ;
            }
            

        }
        if (s[0] < s[s.length() -1])
        {
            sort(arr.begin() , arr.end()  ) ;
            
        }else{
            
            sort(arr.begin() , arr.end() ,greater<pair<char,int>>() ) ;

        }
        arr.insert(arr.begin() , make_pair(s[0] , 1));
        arr.push_back(make_pair(s[s.length() -1] , s.length() )) ;
       
      //  REP( i , nb ){
        //    cout << arr[i].first ;
        //}cout << endl;
        int cost = 0 ;
        for(int i = 0 ; i < nb-1; i++ ){
            cost+= abs((int(arr[i].first) ) - (int(arr[i+1].first))) ;
        }
        cout << cost << " " << nb << endl;
        
            for (int i = 0; i < nb ; i++)
            {
                cout << arr[i].second ;
                if (i!= nb -1)
                {
                    cout << " ";
                }
                
            }
     
        
        
        cout  << endl;
    }
    
    return 0;
}