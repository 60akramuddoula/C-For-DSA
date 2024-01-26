#include <bits/stdc++.h>
using namespace std;
int main()
{
 int a, b, c ; 
 cin>>a>>b>>c;
        int mn_max=  max(max(a,b),c);
        int mn_min= min(min(a,b),c);
        cout<<mn_min<<" "<<mn_max;
 return 0;
}