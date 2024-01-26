#include <bits/stdc++.h>
using namespace std;
int main()
{
  string name ;
  cin>>name;
//   for( int i=0;i<name.size();i++)
//   // never use strlen bcz it is dynamic string class
//   // strlen is only for character type array which is decleared with size of the string 
//   {
//     cout<<name[i]<<endl;
//   }

//shortcut for loop for printing the string by character by character 
// it is called range based for loop
for( char s:name)
{
    cout<<s<<endl;
}
 return 0;
}