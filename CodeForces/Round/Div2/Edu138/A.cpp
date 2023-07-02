
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


int grid [8][8] ;
void valid(map<int,int> line , map<int,int> colls , vector<pair<int,int>> &dispo , int n){
    REP( i , n ){
        REP( j , n ){
            if(line[i] == 0 && colls[j] == 0 ){
            dispo.push_back(make_pair(i,j)) ;

        }

        }
        
    }
}
int main()
{
    int tc ;
    cin >> tc ;
    while (tc -- )
    {
        int n ;
        int  m ; cin >> n >> m  ;
        
        init(grid , 0 ) ;
        pair <int, int> pp;
        map <int , int > line ;
        map <int , int > colls ;
        bool ans = true ;
        
        REP( i , m ){

            cin >> pp.first ;
            cin >> pp.second ;
            
            grid[pp.first][pp.second] = 1 ;
            line[pp.first] ++ ;
            colls[pp.second] ++ ;

            if(line[pp.first] > 2  || colls[pp.second] > 2 ){
                ans = false ;
            }

        }
        if(ans == false) {
            no() ;
            break;
        }
        vector<pair<int,int>> dispo ; 
        REP( i , n ){
        REP( j , n ){
            if(line[i] == 0 && colls[j] == 0 ){
            dispo.push_back(make_pair(i,j)) ;

        }}}

        REP( i , n ){

            if( line[i] == 2  ){
                
            }
        }



    }
    
    
    return 0;
}