#include <bits/stdc++.h>
using namespace std;
int main()
{
 string name;
 getline(cin, name);
 stringstream ss(name);
 string word ; 
//  ss>> word ; 
//  cout<<word;
int cnt=0;
    while( ss>> word )
    {
        // cout<<word <<endl;
        cnt++;
    }

        cout<<cnt<<endl;

        
 return 0;
}