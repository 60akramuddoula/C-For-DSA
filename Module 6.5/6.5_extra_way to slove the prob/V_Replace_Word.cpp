#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 cin>>s;
//  replace(indx , koto gula word rmv, " ki diye replace korbo seta")

    
    while(s.find("EGYPT")!= -1)
    {
        s.replace(s.find("EGYPT"),5," ");
        
    }

        cout<<s<<endl;
 return 0;


}