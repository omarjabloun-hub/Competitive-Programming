#include <bits/stdc++.h>

using namespace std;

#define ll  long long  // 10^18 2^64-1

void no(){
   std ::  cout << "NO\n";

}
void yes(){
   std ::  cout << "YES\n" ;
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


char grid [8][8] ;

char solve(){

    char ans ;
    
    REP(i , 8 ) {
        if(grid[i][0]!='.' ){
            
        
        int j ;
        for( j = 1 ;  j< 8  ; j++ ){
            if( grid[i][0] != grid[i][j] )
                break;
        }
        if(j == 8){
            return grid[i][0] ;
        }
        }

        if(grid[0][i] != '.'){
        int  j = 1 ;
        for( ; j< 8  ; j++ ){
            if(grid[0][i] != grid[j][i] )
                break;
        }
        if(j == 8){
            return grid[0][i] ;
        }
        }
    }
 
    return ';' ;
}

int main()
{
    int tc ;
    cin >> tc ;
    while (tc -- )
    {
        int n = 8 ;

        REP( i , n ){
          
            REP( j , n){

                cin >> grid[i][j] ;

            }
            
        }
         cout <<  solve()  << endl;
    }   
    
    
    return 0;
}