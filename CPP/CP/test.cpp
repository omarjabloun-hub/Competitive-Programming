#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#define pi pair <int ,int > 
#define vi vector <int > 
#define fr(i,a,b) for(int i=a ; i < b ; i++ )
#define testi(ok) if(ok==true) cout << "YES"; else cout << "NO"; 

using namespace std;

int main  ()
{
 string s1 ;
 s1 = "omar" ;
reverse(s1.begin() , s1.end());
cout << s1 << endl;

    return 0;
}