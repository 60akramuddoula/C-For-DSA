#include <bits/stdc++.h>
using namespace std;


// int my_min(int a, int b)
//  {
//     if(a<b) return a; 
//     else 
//     return b; 
//  }

int main()
{
 int a,b; 
 cin>>a>>b; 
//  int mn=my_min(a,b); 
int mn=min(a,b);
int mx=max(a,b);

 cout<<"min is ="<<mn<<endl; 
 cout<<"max is ="<<mx<<endl; 

 return 0;
}