#include <bits/stdc++.h>
using namespace std;
int main()
{
 int x;cin>>x;
 int n;cin>>n;
 int sum=0;
 for( int i=2;i<=n;i=i+2)
 {
    sum= sum+pow(x,i);
 }
 cout<<sum<<endl;
 return 0;
}