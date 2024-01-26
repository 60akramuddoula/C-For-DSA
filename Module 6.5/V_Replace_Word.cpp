#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 cin>>s;
//   string rep=" ";
 for(int i=0;i<s.size();i++)
 {
    if(s[i]=='E' &&
    s[i+1]=='G' &&
    s[i+2]=='Y' &&
    s[i+3]=='P' &&
    s[i+4]=='T')
    {
        i=i+4;
        cout<<" ";
        // s.replace(i, i+5-1,rep);
    }
    else 
    {
        cout<<s[i];
    }

    
    
 }
 return 0;
}