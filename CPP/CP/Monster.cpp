#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#define pi pair <int ,int > 
#define vi vector <int > 
#define fr(i,a,b) for(int i=a ; i < b ; i++ )
#define testi(ok) if(ok==true) cout << "YES"; else cout << "NO"; 

using namespace std;
int mtaaX(int dm,int dc ,int w ,int n)
{
    return((dm-n*dc)/(n*w));
}
int mtaaY(int dm,int hc ,int a ,int n)
{
    return(((n-1)*dm-hc)/(a));
}
int main  ()
{
    int n;
    bool ok=false;
    int t;
    cin >> t ;
   long long  hc,hm ;
    int dc,dm ;
    int k, w ,a ;
    while (t--)
    {
        cin >> hc >> dc ;
        cin >> hm >> dm ;
        cin >> k >> w >> a ;
       
        for (int i = 0; i < 10; i++)
        {
            cout << mtaaX(dm,dc,w,n);
            cout << mtaaY(dm,dc,w,n);
        }
        
        


    }
    
    return 0;
}