
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#define pi pair <int ,int > 
#define vi vector <int > 
#define fr(i,a,b) for(int i=a ; i < b ; i++ )
#define testi(ok) cout << (ok == true ? "yes\n" : "no\n" );  
#define debug(msg) cout << msg << endl ;
using namespace std;

int main  ()
{
    unsigned int  x ; 
    while (cin >> x && x != 0 )
    {
        unsigned int sq = (int) sqrt(x) ;
        testi(x==sq*sq) ;
    }
    return 0;
}