

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


int main()
{
    int tc ;
    cin >> tc ;
    while (tc -- )
    {
        int n, m;
        cin >> n >> m;
        short board[n][m];
        int sumRow[n];
        int sumCol[m];
        for (int i = 0; i < n; i++)
        {
            int s = 0;
            for (int j = 0; j < m; j++)
            {
                short x ;
                cin >> x;
                board[i][j] = x;
                s += x;
            }
            sumRow[i] = s;
        }
        for (int i = 0; i < m; i++)
        {
            int s = 0;
            for (int j = 0; j < n; j++)
            {
                s += board[j][i];
            }
            sumCol[i] = s;
        }
        
        // Approach 1: Rows First
        set <int> rowSwitched;
        int NumberOfRowsSwitched = 0;
        set <int> colSwitched;
        int NumberOfColsSwitched = 0;
        bool flag = true;

        for (int i = 0; i < n; i++)
        {

            if (sumRow[i] < 0)
            {
                sumRow[i] *= -1;
                rowSwitched.insert(i);
                NumberOfRowsSwitched++;
                for(int j=0; j<m; j++)
                {
                    sumCol[j] -= 2*board[i][j];
                }
            }

            
        }

        for (int i = 0; i < m; i++)
        {
            if (sumCol[i] < 0)
            {
                sumCol[i] *= -1;
                colSwitched.insert(i);
                NumberOfColsSwitched++;
                for(int j=0; j<n; j++)
                {
                    sumRow[j] -= 2*board[j][i];
                    if(sumRow[j] < 0)
                    {
                        flag = false;
                    }
                }
            }
        }
        // check all sums are positive
        for (int i = 0; i < n; i++)
        {
            if(sumRow[i] < 0)
            {
                flag = false;
            }

        }
        for (int i = 0; i < m; i++)
        {
            if(sumCol[i] < 0)
            {
                flag = false;
            }

        }
        
        if(flag)
        {
            

            cout << "Yes" << endl;
            cout << NumberOfRowsSwitched << endl;
            for(auto i : rowSwitched)
            {
                cout << i+1 << " " ;
            }
            cout  << endl;
            cout << NumberOfColsSwitched << endl;
            for(auto i : colSwitched)
            {
                cout << i+1 << " " ;
            }
            cout << endl;
            continue;
        }
        

        // Approach 2: Columns First
        set <int> rowSwitched2;
        int NumberOfRowsSwitched2 = 0;
        set <int> colSwitched2;
        int NumberOfColsSwitched2 = 0;
        
        for (int i = 0; i < m; i++)
        {
            if (sumCol[i] < 0)
            {
                sumCol[i] *= -1;
                colSwitched2.insert(i);
                NumberOfColsSwitched2++;
                for(int j=0; j<n; j++)
                {
                    sumRow[j] -= 2*board[j][i];
                }
            }

            
        }

        for (int i = 0; i < n; i++)
        {
            if (sumRow[i] < 0)
            {
                sumRow[i] *= -1;
                rowSwitched2.insert(i);
                NumberOfRowsSwitched2++;
                for(int j=0; j<m; j++)
                {
                    sumCol[j] -= 2*board[i][j];
                    if(sumCol[j] < 0)
                    {
                        flag = false;
                    }
                }
            }
        }
        // check all sums are positive
        for (int i = 0; i < n; i++)
        {
            if(sumRow[i] < 0)
            {
                flag = false;
            }

        }
        for (int i = 0; i < m; i++)
        {
            if(sumCol[i] < 0)
            {
                flag = false;
            }

        }
        if(flag)
        {
            cout << "Yes" << endl;
            cout << NumberOfRowsSwitched2 << endl;
            for(auto i : rowSwitched2)
            {
                cout << i+1 << " " ;
            }
            cout  << endl;
            cout << NumberOfColsSwitched2 << endl;
            for(auto i : colSwitched2)
            {
                cout << i+1 << " " ;
            }
            cout << endl;
            
        }else
        {
            cout << "No" << endl;
        }
    }
    
    
    return 0;
}