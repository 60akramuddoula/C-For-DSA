#include <bits/stdc++.h>
using namespace std;

class R
{
    public:
    int age ;
    string name;
    R(string name,int age)
    {
        this->age= age;
        this->name= name;
    }
};
int main()
{
 R* bappi= new R("akramuddoula",25);
 R* Polash= new R("Mohammad Polash",24);
 // now need to copy 
//  Polash->age=bappi->age;
//  Polash->name=bappi->name;
// now shortcut way to copy,it can be done by dereferencing the obj
*Polash=*bappi;
 cout<<Polash->age<<endl;
 cout<<Polash->name<<endl;

 return 0;
}