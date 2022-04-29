
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#define pi pair <int ,int > 
#define vi vector <int > 
#define fr(i,a,b) for(int i=a ; i < b ; i++ )
#define testi(ok) if(ok==true) cout << "YES"; else cout << "NO"; 
#define debug(msg) cout << msg << endl ;
using namespace std;

int main  ()
{
    int n,m;
    bool ok=true ;
    cin >> n >> m ;
    char c,x;
    cin >> c; 
    fr(i,0,n)
        fr(j,0,m)
         {
             cin >> x ;
             if (i==n-1 && ok )
             {
                 ok = (x != c)?  0: 1 ;

             }
             
         }
    if (m == 1 && x !=c )
    {
        ok = 0 ;
    }
    testi(ok) ;
    
    return 0;
}