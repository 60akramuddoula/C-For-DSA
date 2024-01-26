#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 cin>>s;
 sort(s.begin(),s.end()); 
 //s.begin() means the starting pointer of the string
 // and end() means the ending pointer of the string 
 // for using sort function we need to know the begin and the end of the string  
 cout<<s<<endl;
 return 0;
}