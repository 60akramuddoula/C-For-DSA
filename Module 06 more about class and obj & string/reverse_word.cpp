#include <bits/stdc++.h>
using namespace std;

void print( stringstream& ss)
//stringstream ss er kaj holo sentense ke venge akta 
// packet a rakha then sekhane theke ekta ekta 
// kore word ber kore dewa 
{
     string word;
     // ekhane kono base case alda kore dei ni coz 
     // if diyei ekhnae base case bujhay 
    if(ss>> word)
    {
        print(ss);
        cout<<word<<endl; 
        // print(ss);
    }
}
int main()
{
  string s;
  getline(cin,s);
  stringstream ss(s);
  print(ss);
//   string word;
//   while( ss>> word)
//   {
//     cout<<word<<endl;
//   }
// //   cout<<word<<endl;

// //   cout<<s<<endl;
 return 0;
}