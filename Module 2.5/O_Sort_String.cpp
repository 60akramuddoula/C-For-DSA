#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n;
 cin>>n;
 char s[n];
 for(int i=0;i<n;i++)
 {
    cin>>s[i];
 }
    //use build in function sort for sorting the string
    sort(s,s+n);
     for(int i=0;i<n;i++)
 {
    cout<<s[i];
 }
 return 0;
}