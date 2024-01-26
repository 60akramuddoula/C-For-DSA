#include <bits/stdc++.h>
using namespace std;

// namespace holo ekta group jekhane class, function , varriable
// and so on onk kicu thakte pare
//declearation of namespaces
namespace Bappi
{
    int age=25;
    string name="bappi";
    void print()
    {
        cout<<"bappi's namespaces"<<endl;
    }
}
namespace Habib
{
    int age2=26;
    string name2="habib Ullah";
    void print()
    {
        cout<<"Habib Ullah's namespaces"<<endl;
    }
}
using namespace Bappi;
using namespace Habib;
int main()
{
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<name2<<endl;
    cout<<age2<<endl;
 return 0;
}