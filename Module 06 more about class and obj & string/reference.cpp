#include <bits/stdc++.h>
using namespace std;

void print( string & name)
// & means reference , it is only used for the string operation 
// if we use it , we can change the string from the fuction outside of the main function
{
    name="Bappi";
}
int main()
{
  string name=" akramuddoula";
  print(name);
  cout<<name<<endl;
 return 0;
}