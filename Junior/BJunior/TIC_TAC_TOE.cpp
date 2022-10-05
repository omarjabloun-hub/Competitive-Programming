#include <bits/stdc++.h>


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
char grid[3][3] ;
int  gridN[3][3] ;
int main()
{
    int tc;
    cin >> tc;
    
    while (tc--)
    { 
        
        REP( i , 3 ){
            REP(j , 3 ){
                
                cin >> grid[i][j] ;
                
                
            }
        }
        
        int nbX = 0 ;
        int nbO = 0 ;
        pair< vector<int> , vector<int> > wins ;

        wins.first.push_back(0) ;
        wins.first.push_back(0) ;
        wins.first.push_back(0) ;

        wins.second.push_back(0) ;
        wins.second.push_back(0) ;
        wins.second.push_back(0) ;

        REP( i , 3 ){
            REP(j , 3 ){
                if( grid[i][j] == 'X'){
                    nbX ++ ;
                    gridN[i][j] = 1 ;
                }
                    
                else if (grid[i][j] == 'O'){
                    nbO ++ ;
                    gridN[i][j] = -1 ;
                }
                else
                    gridN[i][j] =  0 ;

                    
                
            }
        }
        if(nbO > nbX  || nbX > nbO+1){cout << "no" << endl;
        continue;}  
        if( nbO + nbX == 0) {cout << "yes" << endl;
        continue;}
        int vsum = 0 ;
        int hsum = 0 ;
        int diag1Sum = 0 ;
        int diag2Sum = 0 ;
        REP( i , 3 ){
            diag1Sum+=gridN[i][i] ;
            diag2Sum+=gridN[i][3-i-1] ;
            REP( j , 3 ){
                vsum += gridN[i][j] ;
                hsum += gridN[j][i] ;
            }
            if(vsum == 3 ){
                wins.first[0] ++ ;
            }else if(vsum == -3){
                wins.second[0] ++ ;

            }
            if(hsum == 3 ){
                wins.first[1] ++ ;

            }else if(hsum == -3){
                wins.second[1] ++ ;
                
            }
        }
        if(diag1Sum == 3 ){
                wins.first[2] ++ ;
            }else if(diag1Sum == -3){
                wins.second[2] ++ ;

            }
        if(diag2Sum == 3 ){
            wins.first[2] ++ ;

        }else if(diag2Sum == -3){
            wins.second[2] ++ ;
            
        }
        int XWins =  wins.first[0] + wins.first[1] + wins.first[2]  ;
        int OWins =  wins.second[0] + wins.second[1] + wins.second[2]  ;
        if((XWins > 0 && OWins > 0 ) || XWins > 4 || OWins > 4 || wins.first[0] > 1 || wins.first[1] > 1 
        || wins.second[0] > 1 || wins.second[1] > 1 ){
            cout << "no" << endl;
            
        }else
          cout << "yes" << endl;
    }
    
    return 0;
}