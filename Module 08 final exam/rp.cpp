#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 cin>>s;
 string ter;
 cin>>ter;
//  replace(indx , koto gula word rmv, " ki diye replace korbo seta")

    
    while(s.find(ter)!= -1)
    {
        s.replace(s.find(ter), ter.size(),"$");
        
    }

        cout<<s<<endl;
 return 0;


}