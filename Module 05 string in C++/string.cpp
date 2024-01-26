#include <bits/stdc++.h>
using namespace std;
int main()
{
 string name= "akramuddoula";
//  cout<<name<<endl; 
//  cout<<name.size()<<endl;
//  cout<<name.max_size()<<endl;
//  cout<<name.capacity()<<endl;
//  cout<<name.max_size()<<endl;
//  string name2=" bappi";
//  name.empty();
//  name.clear();
//  cout<<name.size()<<endl;


//  if(name.empty()==true ) cout<<" empty";
//  else cout<<"not empty";

//  name.resize(5);
//  name.resize(12,'x');
//  cout<<name<<endl;

 //  if(name==name2)
//  {
//     cout<<"yes";
//  } 
//  else
//  {
//     cout<<"no";
//  }


// element access for string using build in function 
// cout<<name[0]<<endl;
// cout<<name.back()<<endl; 

//string modifier 
string name2= "bappivalo";
// name=name+name2 ; 
// cout<<name<<endl;
// name2[5]='D'; -> not working 
// name2= name2+" akramuddoula";
// cout<<name2<<endl;


// name2.push_back('x'); // push back mane insert kora and eta last index a hobe 
// name2.pop_back();
// name2.pop_back();
// name2.pop_back(); pop back mame remove kora and eta last index theke remove hobe 
// name2.pop_back();
// name2.pop_back();
// cout<<name2<<endl;


// name2.erase(2,1);
name2.replace(5,0,"cele");

cout<<name2<<endl;





 return 0;
}