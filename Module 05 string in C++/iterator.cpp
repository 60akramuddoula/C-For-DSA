#include <bits/stdc++.h>
using namespace std;
int main()
{
 string name;
 cin>>name;
//  string :: iterator it ;
//  for(int i=0;i<name.size();i++)

//  {
//     cout<<name[i]<<endl; 
//  }

// cout<<*name.begin()<<endl;
// cout<<*name.end()<<endl;

for(  auto it =name.begin(); it <name.end(); it++) // here i use auto to detect automatically the iterator that what iterator it is and where it is pointed ;
{
    cout<<* it <<endl;
}
 return 0;
}