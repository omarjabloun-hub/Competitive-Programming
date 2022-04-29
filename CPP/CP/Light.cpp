#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#define pi pair <int ,int > 
#define vi vector <int > 
#define fr(i,a,b) for(int i=a ; i < b ; i++ )
#define testi(ok) if(ok==true) cout << "yes" << endl ; else cout << "no" << endl ; 
#define debug(msg) cout << msg << endl ;

using namespace std;

int main  ()
{
    int n,m,a,b , i;
    bool ok=false;
    int x ;
    while (x != 0 )
    {
        cin >> x ;
        if (x == 0)
            break;
        int nbDiv = 1;
        for (int i = 1; i <= x/2 ; i++ )
            if (x % i == 0){
                debug( "i = " << i ); 
                nbDiv++;        
            }
        debug(nbDiv) ;
        testi(nbDiv%2 != 0);
              
    }
    
    return 0;
}