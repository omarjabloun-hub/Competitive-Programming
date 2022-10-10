

#include <bits/stdc++.h>

using namespace std;

#define ll  long long   // 10^18 2^64-1
#define dd  double
#define str string
#define ul  unsigned long 
#define ull unsigned long long 
#define pi  pair<int, int>
#define pll  pair<ll, ll>
#define pdd  pair<db, db>

#define vi  vector<int>
#define vb  vector<bool>
#define vll  vector<ll>
#define vdd  vector<dd>
#define vs  vector<str>

#define vpi vector<pi>
#define vpll vector<pll>
#define vpdd vector<pdd>

#define wi  vector<vi>

#define mii map<int, int>
#define si  set<int>
#define msi multiset<int> 

void yes(){
    cout<<"YES"<<endl;
}
void no(){
    cout<<"NO"<<endl;
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
    int tc;
    cin >> tc;
    
    while (tc--)
    { 
        int n ;
        cin >> n ;
        int arr[n] ;
        REP( i , n ){

            cin >> arr[i] ;
        }
        if (arr[0] % 2 == 0)
        {
            int i = 0 ;

            for ( i = n-1; i >= 0; i--) {
                if (arr[i] %2 == 0)
                {
                    break;
                }
                
            }

            int j ;
            
            for ( j = i; j >= 0 ; j--)
            {
                if ( arr[j] % 2 == 0 )
                {
                    cout << i << " " << j << endl;
                }
                
            }

            REP( i , n ){
                if (arr[i] % 2 == 1)
                {
                    cout <<  0 << " " << i << endl;
                }
                
                
            }

        }

        
    }
    
    return 0;
}