#include <iostream>
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

using namespace std ;

const int INF = 1000000000;
vector<vector<pair<int,int> >> adj;

pair<int , int> maxi ;   

void dijkstra(int s, vector<int> & d) {
    int n = adj.size();
    d.assign(n, INF);
    vector<bool> u(n, false);

    d[s] = 0;
    for (int i = 0; i < n; i++) {

        
        
        int v = -1;
        for (int j = 0; j < n; j++) {
            if (!u[j] && (v == -1 || d[j] < d[v]))
                v = j;
        }

        if (d[v] == INF)
            break;

        u[v] = true;
        for (auto edge : adj[v]) {
            int to = edge.first;
            int len = edge.second;

            if (d[v] + len < d[to]) {
                d[to] = d[v] + len;
            }
        }
    }
}
 
 int n ;



int valid(int i , int j){
    return(i < n && j < n && i >= 0 && j >= 0 ) ;
}

    int kx[] = {0 , 1 , 0 , -1} ;
    int ky[] = {1 , 0 , -1 , 0} ;
 
int main(){

   
    cin >> n ;
    vector< vector<int>> grid (n , vector<int>(n))    ;
    maxi = make_pair( 0 , 0) ;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j] ;           
            if( grid[i][j] > grid[maxi.first][maxi.second]) {
                maxi.first = i ;
                maxi.second = j ;
            }
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            vector<pair<int,int> > x ;
            for (int k = 0; k < 4; k++)
            {
                
                if(valid(i+kx[k] , j+ky[k] )){
                   
                        x.push_back(make_pair(
                            
                                (i+kx[k])*n + (j + ky[k])
                                ,
                                pow (grid[i][j] - grid[i+kx[k]][j+ky[k]] , 2))
                                );

                }

            }
            adj.push_back(x) ;

        }
        
    }

    //Djikstra

    vector<int> ans ;

    dijkstra(0 , ans) ;
    cout << ans[maxi.first*n + maxi.second] << endl;

    return 0 ;
}