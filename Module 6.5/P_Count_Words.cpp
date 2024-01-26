#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s ;
 getline(cin,s);
//  stringstream ss (s);
//  string word;
//  int cnt=0;
//  while( ss>> word)
//  {
//     cnt++;
//  }
bool found=false;
int cnt=0;
for( char c:s)
{
    if(isalpha(c))
    //here found true means stay in same word
    // but found false means we get new word 
    {
        if( found==false) 
        {
            cnt++;
        }
        found =true;

    }
    else 
    {
        found= false; 
   
    }
}
cout<<cnt<<endl;
 return 0;
}