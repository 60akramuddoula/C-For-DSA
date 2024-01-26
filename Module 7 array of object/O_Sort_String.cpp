#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n; cin>>n; 
 int frq[26]= {0};
 for( int i=0;i<n;i++)
 {
    char c; cin>>c;
    frq[c-'a']++;
 }
 for( char i ='a';i<='z';i++)
 {
    // now check wheather any letter is exist or not 
    // mane frq arry er value  0 theke boro kina 
    if(frq[i-'a']>0)
    {
       for( int j =0; j< frq[i-'a']; j++)
       // loop use korci cz joto bar letter asbe toto bar print hobe serially
       {
        cout<<i;
       }
    }
 }
 return 0;
}