#include <bits/stdc++.h>
using namespace std;
int main()
{
 string name;
 cin>>name ;
//  for( char s:name)
//  {
//     cout<<s<<endl;
//  }
sort(name.begin(), name.end());
// cout<<name<<endl;
for( char s:name)
{
    cout<<s<<endl;
}

 return 0;
}